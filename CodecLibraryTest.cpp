#include "TestHarness.h"
#include "CodecLibrary.h"
#include "BrightnessDecorator.h"
#include "ColorInversionDecorator.h"
#include "WindowsBitmapDecoder.h"
#include "WindowsBitmapEncoder.h"
#include "BitmapIterator.h"
#include "SizedWord.h"
#include <fstream>
#include <memory>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace BitmapGraphics;

namespace
{
    const std::string msBmp{"image/x-ms-bmp"};
    
    std::shared_ptr<CodecLibrary> theCodecLibrary;

    void setUp()
    {
        theCodecLibrary.reset(new CodecLibrary);
        theCodecLibrary->registerEncoder(std::make_unique<WindowsBitmapEncoder>());
        theCodecLibrary->registerDecoder(std::make_unique<WindowsBitmapDecoder>());
    }

    void tearDown()
    {
        theCodecLibrary.reset();
    }
}

//a function to pointerize the RGB values of a particular pixel
std::shared_ptr<Binary::SizedWord<uint8_t>> channelGet(std::shared_ptr<BitmapGraphics::Color> inCol, int i)
{
	if (i == 0)
	{
		return std::make_shared<Binary::SizedWord<uint8_t>>(inCol->getRed());
	}
	else {
		if (i == 1)
		{
			return std::make_shared<Binary::SizedWord<uint8_t>>(inCol->getGreen());
		}
		else {
			if (i == 2)
			{
				return std::make_shared<Binary::SizedWord<uint8_t>>(inCol->getBlue());
			}
		}
	}
}

//a function to convert RGB values to string, then int format for the purpose of logical comparison
void stringify(std::vector<int>& channelValueVec, std::stringstream& s1, std::stringstream& s2, std::stringstream& s3, std::stringstream& s4, std::stringstream& s5, std::stringstream& s6)
{
	std::string string1 = s1.str();
	std::vector<char> cstr1(string1.c_str(), string1.c_str() + string1.size() + 1);
	int k = (int)cstr1[0];
	std::string string2 = s2.str();
	std::vector<char> cstr2(string2.c_str(), string2.c_str() + string2.size() + 1);
	int l = (int)cstr2[0];
	std::string string3 = s3.str();
	std::vector<char> cstr3(string3.c_str(), string3.c_str() + string3.size() + 1);
	int m = (int)cstr3[0];

	std::string string4 = s4.str();
	std::vector<char> cstr4(string4.c_str(), string4.c_str() + string4.size() + 1);
	int n = (int)cstr4[0];
	std::string string5 = s5.str();
	std::vector<char> cstr5(string5.c_str(), string5.c_str() + string5.size() + 1);
	int o = (int)cstr5[0];
	std::string string6 = s6.str();
	std::vector<char> cstr6(string6.c_str(), string6.c_str() + string6.size() + 1);
	int p = (int)cstr6[0];

	channelValueVec.push_back(k);
	channelValueVec.push_back(l);
	channelValueVec.push_back(m);
	channelValueVec.push_back(n);
	channelValueVec.push_back(o);
	channelValueVec.push_back(p);
}

//a function to stream RGB values into stringstreams for ease of use
void channelValStreamer(std::vector<std::shared_ptr<Binary::SizedWord<uint8_t>>> channelPtrVec, std::stringstream& s1, std::stringstream& s2, std::stringstream& s3, std::stringstream& s4, std::stringstream& s5, std::stringstream& s6)
{
	s1 << *(channelPtrVec[0]);
	s2 << *(channelPtrVec[1]);
	s3 << *(channelPtrVec[2]);

	s4 << *(channelPtrVec[3]);
	s5 << *(channelPtrVec[4]);
	s6 << *(channelPtrVec[5]);
}

//a function to containerize ready-to-compare RGB values
std::vector<std::shared_ptr<Binary::SizedWord<uint8_t>>> rgbCollectionGen(std::shared_ptr<BitmapGraphics::Color> color2, std::shared_ptr<BitmapGraphics::Color> color)
{
	using channelVal = Binary::SizedWord<uint8_t>;
	using channelPtr = std::shared_ptr<channelVal>;

	channelPtr r2 = channelGet(color2, 0);
	channelPtr g2 = channelGet(color2, 1);
	channelPtr b2 = channelGet(color2, 2);

	channelPtr r = channelGet(color, 0);
	channelPtr g = channelGet(color, 1);
	channelPtr b = channelGet(color, 2);

	std::vector<channelPtr> channelPointerVector;
	channelPointerVector.push_back(r2);
	channelPointerVector.push_back(g2);
	channelPointerVector.push_back(b2);
	channelPointerVector.push_back(r);
	channelPointerVector.push_back(g);
	channelPointerVector.push_back(b);

	return channelPointerVector;
}

//a function to add the stringstream'd RGB values to a std vector *NOTE: mainly to prevent test bloat
void ssPusher(std::vector< std::stringstream* >& myVector, std::stringstream& s1, std::stringstream& s2, std::stringstream& s3, std::stringstream& s4, std::stringstream& s5, std::stringstream& s6)
{
	myVector.push_back(&s1);
	myVector.push_back(&s2);
	myVector.push_back(&s3);
	myVector.push_back(&s4);
	myVector.push_back(&s5);
	myVector.push_back(&s6);
}

TEST(invalidDecoder, CodecLibrary)
{
    HBitmapDecoder decoder = std::make_unique<WindowsBitmapDecoder>();

    try
    {
        decoder->createIterator();
        CHECK(false);
    }
    catch (const std::exception& exc)
    {
        std::string theWhat = exc.what();
        CHECK_EQUAL("No decoded bitmap present", theWhat);
        CHECK(true);
    }
}

TEST(invalidEncoder, CodecLibrary)
{
    HBitmapEncoder encoder = std::make_unique<WindowsBitmapEncoder>();

    try
    {
        std::ostringstream os{std::ios::binary};
        encoder->encodeToStream(os);
    }
    catch (const std::exception& exc)
    {
		std::string theWhat2 = exc.what();
		CHECK_EQUAL("Invalid encoder: null iterator", theWhat2);
        CHECK(true);
    }
}

TEST(createEncoderViaMimeType, CodecLibrary)
{
    setUp();
    
    Bitmap nullBitmap{0, 0};
    HBitmapIterator iterator {nullBitmap.createIterator()};
    HBitmapEncoder encoder {theCodecLibrary->createEncoder(msBmp, std::move(iterator))};

    CHECK(dynamic_cast<WindowsBitmapEncoder*>(encoder.get()));

    tearDown();
}

TEST(failedCreateEncoderViaMimeType, CodecLibrary)
{
    setUp();
    
    Bitmap nullBitmap{0, 0};
    HBitmapIterator iterator {nullBitmap.createIterator()};
    
    try
    {
        HBitmapEncoder encoder {theCodecLibrary->createEncoder("image/unsupported-type", std::move(iterator))};
        CHECK(false);
    }
    catch (const std::exception& exc)
    {
		std::string theWhat3 = exc.what();
		CHECK_EQUAL("No encoder for image/unsupported-type", theWhat3);
        CHECK(true);
    }
    
    tearDown();
}

TEST(createDecoderViaMimeType, CodecLibrary)
{
    setUp();

    std::stringstream ss;
    HBitmapDecoder decoder {theCodecLibrary->createDecoder(msBmp, ss)};

    CHECK(dynamic_cast<WindowsBitmapDecoder*>(decoder.get()));

    tearDown();
}

TEST(createFailedDecoderViaMimeType, CodecLibrary)
{
    setUp();
    
    std::stringstream ss;
    
    try
    {
        HBitmapDecoder decoder {theCodecLibrary->createDecoder("image/unsupported-type", ss)};
        CHECK(false);
    }
    catch (const std::exception& exc)
    {
		std::string theWhat4 = exc.what();
		CHECK_EQUAL("No decoder for image/unsupported-type", theWhat4);
        CHECK(true);
    }

    tearDown();
}

TEST(createDecoderAutoDetermine, CodecLibrary)
{
    setUp();

    std::ifstream inFile{"basic.bmp", std::ios::binary};
    CHECK_EQUAL(0, !inFile);
    HBitmapDecoder decoder {theCodecLibrary->createDecoder(inFile)};

    CHECK(decoder.get());
    CHECK(dynamic_cast<WindowsBitmapDecoder*>(decoder.get()));

    tearDown();
}

TEST(windowsBitmapDecodeEncode, CodecLibrary)
{
    setUp();

    std::ifstream inFile{"basic.bmp", std::ios::binary};
    CHECK_EQUAL(0, !inFile);
    
    HBitmapDecoder decoder {theCodecLibrary->createDecoder(inFile)};
    HBitmapIterator iterator {decoder->createIterator()};
    
    CHECK(iterator.get());
    CHECK_EQUAL(100, iterator->getBitmapHeight());
    CHECK_EQUAL(100, iterator->getBitmapWidth());

    HBitmapEncoder encoder {theCodecLibrary->createEncoder(msBmp, std::move(iterator))};

    std::ofstream outFile{"output_basicCopy.bmp", std::ios::binary};
    encoder->encodeToStream(outFile);

    tearDown();
}

//this next test satisfies the TODO that used to be at the end of the previous test
TEST(fileCompareInputOutput, CodecLibrary)
{
	setUp();

    //first we will load up the copy we made in the last test
	std::ifstream theCopy{ "output_basicCopy.bmp", std::ios::binary };
	CHECK_EQUAL(0, !theCopy);

	HBitmapDecoder decoder4Copy{ theCodecLibrary->createDecoder(theCopy) };
	HBitmapIterator iterator4Copy{ decoder4Copy->createIterator() };
	CHECK(iterator4Copy.get());

    //then we will load up the original bitmap
	std::ifstream theOriginal{ "basic.bmp", std::ios::binary };
	CHECK_EQUAL(0, !theOriginal);

	HBitmapDecoder decoder4Original{ theCodecLibrary->createDecoder(theOriginal) };
	HBitmapIterator iterator4Original{ decoder4Original->createIterator() };
	CHECK(iterator4Original.get());

    //here we loop through both, checking to make sure there are the same number of pixels in a row, same color, and same number of rows in the files
    auto numberOfScanLines2{ 0 };
    auto numberOfScanLines{ 0 };
	while (!iterator4Original->isEndOfImage() && !iterator4Copy->isEndOfImage())
	{
		auto numberOfPixelsInScanLine2{ 0 };
		auto numberOfPixelsInScanLine{ 0 };
		while (!iterator4Original->isEndOfScanLine() && !iterator4Copy->isEndOfScanLine())
		{
            using colorPtr = std::shared_ptr<BitmapGraphics::Color>;
            colorPtr color2 = std::make_shared<BitmapGraphics::Color>(iterator4Original->getColor());
            colorPtr color = std::make_shared<BitmapGraphics::Color>(iterator4Copy->getColor());
            CHECK_EQUAL(*color2, *color); //check the whole color

            auto channelPtrVec = rgbCollectionGen(color2, color);
            std::vector< std::stringstream* > myVector;
			std::stringstream s1, s2, s3, s4, s5, s6;
            ssPusher(myVector, s1, s2, s3, s4, s5, s6);
            channelValStreamer(channelPtrVec, s1, s2, s3, s4, s5, s6);
            std::vector<int> rgbVec;
            stringify(rgbVec, s1, s2, s3, s4, s5, s6);
            //check the RGB values separately *NOTE: these values will be -128 to 128 instead of 0 to 255
			CHECK_EQUAL(rgbVec[0], rgbVec[3]);
			CHECK_EQUAL(rgbVec[1], rgbVec[4]);
			CHECK_EQUAL(rgbVec[2], rgbVec[5]);

            //reset the stringstreams
            for(std::stringstream* ss : myVector)
                ss->str(std::string());
			++numberOfPixelsInScanLine2;
			++numberOfPixelsInScanLine;
            iterator4Original->nextPixel();
            iterator4Copy->nextPixel();
		}
        //first check to make sure the length of the scanline is the same
        CHECK(iterator4Copy->isEndOfScanLine());
        CHECK(iterator4Original->isEndOfScanLine());
		CHECK_EQUAL(numberOfPixelsInScanLine, numberOfPixelsInScanLine2);

		++numberOfScanLines2;
		++numberOfScanLines;
        iterator4Original->nextScanLine();
        iterator4Copy->nextScanLine();
	}
    //first check to make sure the number of rows is the same
    CHECK(iterator4Copy->isEndOfImage());
    CHECK(iterator4Original->isEndOfImage());
	CHECK_EQUAL(numberOfScanLines, numberOfScanLines2);

    //this next part is a bit redundant but still good practice
	CHECK_EQUAL(iterator4Original->getBitmapHeight(), iterator4Copy->getBitmapHeight());
    CHECK_EQUAL(iterator4Original->getBitmapWidth(), iterator4Copy->getBitmapHeight());

	tearDown();
}

TEST(brightnessDecoratorIterator, CodecLibrary)
{
    setUp();

    std::ifstream inFile{"basic.bmp", std::ios::binary};
    CHECK_EQUAL(0, !inFile);
    
    HBitmapDecoder decoder {theCodecLibrary->createDecoder(inFile)};
    HBitmapIterator iterator {decoder->createIterator()};
    
    CHECK(iterator.get());
    CHECK_EQUAL(100, iterator->getBitmapHeight());
    CHECK_EQUAL(100, iterator->getBitmapWidth());

    auto brightnessIterator = std::make_unique<BrightnessDecorator>(std::move(iterator), 80);
    auto encoder {theCodecLibrary->createEncoder(msBmp, std::move(brightnessIterator))};

    std::ofstream outFile{"output_basicBrightnessAdjusted.bmp", std::ios::binary};
    encoder->encodeToStream(outFile);
    // [SOLVED] TODO: file compare input/output
    //see next test

    tearDown();
}

//this next test satisfies the TODO that used to be at the end of the previous test
TEST(fileCompareInputOutput_BrightnessDec, CodecLibrary)
{
	setUp();

	//first we will load up the copy we made in the last test
	std::ifstream theCopy{ "output_basicBrightnessAdjusted.bmp", std::ios::binary };
	CHECK_EQUAL(0, !theCopy);

	HBitmapDecoder decoder4Copy{ theCodecLibrary->createDecoder(theCopy) };
	HBitmapIterator iterator4Copy{ decoder4Copy->createIterator() };
	CHECK(iterator4Copy.get());

	//then we will load up the original bitmap
	std::ifstream theOriginal{ "basic.bmp", std::ios::binary };
	CHECK_EQUAL(0, !theOriginal);

	HBitmapDecoder decoder4Original{ theCodecLibrary->createDecoder(theOriginal) };
	HBitmapIterator iterator4Original{ decoder4Original->createIterator() };
	CHECK(iterator4Original.get());
    auto brightnessIterator = std::make_unique<BrightnessDecorator>(std::move(iterator4Original), 80);

	//here we loop through both, checking to make sure there are the same number of pixels in a row, same color, and same number of rows in the files
	auto numberOfScanLines2{ 0 };
	auto numberOfScanLines{ 0 };
	while (!brightnessIterator->isEndOfImage() && !iterator4Copy->isEndOfImage())
	{
		auto numberOfPixelsInScanLine2{ 0 };
		auto numberOfPixelsInScanLine{ 0 };
		while (!brightnessIterator->isEndOfScanLine() && !iterator4Copy->isEndOfScanLine())
		{
			using colorPtr = std::shared_ptr<BitmapGraphics::Color>;
			colorPtr color2 = std::make_shared<BitmapGraphics::Color>(brightnessIterator->getColor());
			colorPtr color = std::make_shared<BitmapGraphics::Color>(iterator4Copy->getColor());
			CHECK_EQUAL(*color2, *color); //check the whole color

			auto channelPtrVec = rgbCollectionGen(color2, color);
			std::vector< std::stringstream* > myVector;
			std::stringstream s1, s2, s3, s4, s5, s6;
			ssPusher(myVector, s1, s2, s3, s4, s5, s6);
			channelValStreamer(channelPtrVec, s1, s2, s3, s4, s5, s6);
			std::vector<int> rgbVec;
			stringify(rgbVec, s1, s2, s3, s4, s5, s6);
			//check the RGB values separately *NOTE: these values will be -128 to 128 instead of 0 to 255
			CHECK_EQUAL(rgbVec[0], rgbVec[3]);
			CHECK_EQUAL(rgbVec[1], rgbVec[4]);
			CHECK_EQUAL(rgbVec[2], rgbVec[5]);

			//reset the stringstreams
			for (std::stringstream* ss : myVector)
				ss->str(std::string());
			++numberOfPixelsInScanLine2;
			++numberOfPixelsInScanLine;
            brightnessIterator->nextPixel();
			iterator4Copy->nextPixel();
		}
		//first check to make sure the length of the scanline is the same
		CHECK(iterator4Copy->isEndOfScanLine());
		CHECK(brightnessIterator->isEndOfScanLine());
		CHECK_EQUAL(numberOfPixelsInScanLine, numberOfPixelsInScanLine2);

		++numberOfScanLines2;
		++numberOfScanLines;
        brightnessIterator->nextScanLine();
		iterator4Copy->nextScanLine();
	}
	//first check to make sure the number of rows is the same
	CHECK(iterator4Copy->isEndOfImage());
	CHECK(brightnessIterator->isEndOfImage());
	CHECK_EQUAL(numberOfScanLines, numberOfScanLines2);

	//this next part is a bit redundant but still good practice
	CHECK_EQUAL(brightnessIterator->getBitmapHeight(), iterator4Copy->getBitmapHeight());
	CHECK_EQUAL(brightnessIterator->getBitmapWidth(), iterator4Copy->getBitmapHeight());

	tearDown();
}


TEST(colorInvertDecoratorIterator, CodecLibrary)
{
    setUp();

    std::ifstream inFile{"basic.bmp", std::ios::binary};
    CHECK_EQUAL(0, !inFile);
    
    HBitmapDecoder decoder {theCodecLibrary->createDecoder(inFile)};
    HBitmapIterator iterator {decoder->createIterator()};
    
    CHECK(iterator.get());
    CHECK_EQUAL(100, iterator->getBitmapHeight());
    CHECK_EQUAL(100, iterator->getBitmapWidth());

    HBitmapIterator colorInvertIterator = std::make_unique<ColorInversionDecorator>(std::move(iterator));
    HBitmapEncoder encoder {theCodecLibrary->createEncoder(msBmp, std::move(colorInvertIterator))};

    std::ofstream outFile{"output_basicColorInvert.bmp", std::ios::binary};
    encoder->encodeToStream(outFile);
    // [SOLVED] TODO: file compare input/output
	//see next test

    tearDown();
}

//this next test satisfies the TODO that used to be at the end of the previous test
TEST(fileCompareInputOutput_ColInvert, CodecLibrary)
{
	setUp();

	//first we will load up the copy we made in the last test
	std::ifstream theCopy{ "output_basicColorInvert.bmp", std::ios::binary };
	CHECK_EQUAL(0, !theCopy);

	HBitmapDecoder decoder4Copy{ theCodecLibrary->createDecoder(theCopy) };
	HBitmapIterator iterator4Copy{ decoder4Copy->createIterator() };
	CHECK(iterator4Copy.get());

	//then we will load up the original bitmap
	std::ifstream theOriginal{ "basic.bmp", std::ios::binary };
	CHECK_EQUAL(0, !theOriginal);

	HBitmapDecoder decoder4Original{ theCodecLibrary->createDecoder(theOriginal) };
	HBitmapIterator iterator4Original{ decoder4Original->createIterator() };
	CHECK(iterator4Original.get());

	HBitmapIterator colorInvertIterator = std::make_unique<ColorInversionDecorator>(std::move(iterator4Original));

	//here we loop through both, checking to make sure there are the same number of pixels in a row, same color, and same number of rows in the files
	auto numberOfScanLines2{ 0 };
	auto numberOfScanLines{ 0 };
	while (!colorInvertIterator->isEndOfImage() && !iterator4Copy->isEndOfImage())
	{
		auto numberOfPixelsInScanLine2{ 0 };
		auto numberOfPixelsInScanLine{ 0 };
		while (!colorInvertIterator->isEndOfScanLine() && !iterator4Copy->isEndOfScanLine())
		{
			using colorPtr = std::shared_ptr<BitmapGraphics::Color>;
			colorPtr color2 = std::make_shared<BitmapGraphics::Color>(colorInvertIterator->getColor());
			colorPtr color = std::make_shared<BitmapGraphics::Color>(iterator4Copy->getColor());
			CHECK_EQUAL(*color2, *color); //check the whole color

			auto channelPtrVec = rgbCollectionGen(color2, color);
			std::vector< std::stringstream* > myVector;
			std::stringstream s1, s2, s3, s4, s5, s6;
			ssPusher(myVector, s1, s2, s3, s4, s5, s6);
			channelValStreamer(channelPtrVec, s1, s2, s3, s4, s5, s6);
			std::vector<int> rgbVec;
			stringify(rgbVec, s1, s2, s3, s4, s5, s6);
			//check the RGB values separately *NOTE: these values will be -128 to 128 instead of 0 to 255
			CHECK_EQUAL(rgbVec[0], rgbVec[3]);
			CHECK_EQUAL(rgbVec[1], rgbVec[4]);
			CHECK_EQUAL(rgbVec[2], rgbVec[5]);

			//reset the stringstreams
			for (std::stringstream* ss : myVector)
				ss->str(std::string());
			++numberOfPixelsInScanLine2;
			++numberOfPixelsInScanLine;
			colorInvertIterator->nextPixel();
			iterator4Copy->nextPixel();
		}
		//first check to make sure the length of the scanline is the same
		CHECK(iterator4Copy->isEndOfScanLine());
		CHECK(colorInvertIterator->isEndOfScanLine());
		CHECK_EQUAL(numberOfPixelsInScanLine, numberOfPixelsInScanLine2);

		++numberOfScanLines2;
		++numberOfScanLines;
		colorInvertIterator->nextScanLine();
		iterator4Copy->nextScanLine();
	}
	//first check to make sure the number of rows is the same
	CHECK(iterator4Copy->isEndOfImage());
	CHECK(colorInvertIterator->isEndOfImage());
	CHECK_EQUAL(numberOfScanLines, numberOfScanLines2);

	//this next part is a bit redundant but still good practice
	CHECK_EQUAL(colorInvertIterator->getBitmapHeight(), iterator4Copy->getBitmapHeight());
	CHECK_EQUAL(colorInvertIterator->getBitmapWidth(), iterator4Copy->getBitmapHeight());

	tearDown();
}

TEST(doubleDecorator, CodecLibrary)
{
    setUp();

    std::ifstream inFile{"basic.bmp", std::ios::binary};
    CHECK_EQUAL(0, !inFile);
    
    HBitmapDecoder decoder {theCodecLibrary->createDecoder(inFile)};
    HBitmapIterator iterator {decoder->createIterator()};
    
    CHECK(iterator.get());
    CHECK_EQUAL(100, iterator->getBitmapHeight());
    CHECK_EQUAL(100, iterator->getBitmapWidth());

    HBitmapIterator colorInvertIterator = std::make_unique<ColorInversionDecorator>(std::move(iterator));
    HBitmapIterator darkenColorInvertIterator = std::make_unique<BrightnessDecorator>(std::move(colorInvertIterator), -50);

    HBitmapEncoder encoder {theCodecLibrary->createEncoder(msBmp, std::move(darkenColorInvertIterator))};
        
    std::ofstream outFile{"output_darkInverted.bmp", std::ios::binary};
    encoder->encodeToStream(outFile);
    // [SOLVED] TODO: file compare input/output
	//see next test

    tearDown();
}

//this next test satisfies the TODO that used to be at the end of the previous test
TEST(fileCompareInputOutput_doubleDec, CodecLibrary)
{
	setUp();

	//first we will load up the copy we made in the last test
	std::ifstream theCopy{ "output_darkInverted.bmp", std::ios::binary };
	CHECK_EQUAL(0, !theCopy);

	HBitmapDecoder decoder4Copy{ theCodecLibrary->createDecoder(theCopy) };
	HBitmapIterator iterator4Copy{ decoder4Copy->createIterator() };
	CHECK(iterator4Copy.get());

	//then we will load up the original bitmap
	std::ifstream theOriginal{ "basic.bmp", std::ios::binary };
	CHECK_EQUAL(0, !theOriginal);

	HBitmapDecoder decoder4Original{ theCodecLibrary->createDecoder(theOriginal) };
	HBitmapIterator iterator4Original{ decoder4Original->createIterator() };
	CHECK(iterator4Original.get());

	HBitmapIterator colorInvertIterator = std::make_unique<ColorInversionDecorator>(std::move(iterator4Original));
	HBitmapIterator darkenColorInvertIterator = std::make_unique<BrightnessDecorator>(std::move(colorInvertIterator), -50);

	//here we loop through both, checking to make sure there are the same number of pixels in a row, same color, and same number of rows in the files
	auto numberOfScanLines2{ 0 };
	auto numberOfScanLines{ 0 };
	while (!darkenColorInvertIterator->isEndOfImage() && !iterator4Copy->isEndOfImage())
	{
		auto numberOfPixelsInScanLine2{ 0 };
		auto numberOfPixelsInScanLine{ 0 };
		while (!darkenColorInvertIterator->isEndOfScanLine() && !iterator4Copy->isEndOfScanLine())
		{
			using colorPtr = std::shared_ptr<BitmapGraphics::Color>;
			colorPtr color2 = std::make_shared<BitmapGraphics::Color>(darkenColorInvertIterator->getColor());
			colorPtr color = std::make_shared<BitmapGraphics::Color>(iterator4Copy->getColor());
			CHECK_EQUAL(*color2, *color); //check the whole color

			auto channelPtrVec = rgbCollectionGen(color2, color);
			std::vector< std::stringstream* > myVector;
			std::stringstream s1, s2, s3, s4, s5, s6;
			ssPusher(myVector, s1, s2, s3, s4, s5, s6);
			channelValStreamer(channelPtrVec, s1, s2, s3, s4, s5, s6);
			std::vector<int> rgbVec;
			stringify(rgbVec, s1, s2, s3, s4, s5, s6);
			//check the RGB values separately *NOTE: these values will be -128 to 128 instead of 0 to 255
			CHECK_EQUAL(rgbVec[0], rgbVec[3]);
			CHECK_EQUAL(rgbVec[1], rgbVec[4]);
			CHECK_EQUAL(rgbVec[2], rgbVec[5]);

			//reset the stringstreams
			for (std::stringstream* ss : myVector)
				ss->str(std::string());
			++numberOfPixelsInScanLine2;
			++numberOfPixelsInScanLine;
			darkenColorInvertIterator->nextPixel();
			iterator4Copy->nextPixel();
		}
		//first check to make sure the length of the scanline is the same
		CHECK(iterator4Copy->isEndOfScanLine());
		CHECK(darkenColorInvertIterator->isEndOfScanLine());
		CHECK_EQUAL(numberOfPixelsInScanLine, numberOfPixelsInScanLine2);

		++numberOfScanLines2;
		++numberOfScanLines;
		darkenColorInvertIterator->nextScanLine();
		iterator4Copy->nextScanLine();
	}
	//first check to make sure the number of rows is the same
	CHECK(iterator4Copy->isEndOfImage());
	CHECK(darkenColorInvertIterator->isEndOfImage());
	CHECK_EQUAL(numberOfScanLines, numberOfScanLines2);

	//this next part is a bit redundant but still good practice
	CHECK_EQUAL(darkenColorInvertIterator->getBitmapHeight(), iterator4Copy->getBitmapHeight());
	CHECK_EQUAL(darkenColorInvertIterator->getBitmapWidth(), iterator4Copy->getBitmapHeight());

	tearDown();
}
