#include "TestHarness.h"
#include "WindowsBitmapHeader.h"
#include <fstream>

using namespace BitmapGraphics;

TEST(FileHeaderTest, WindowsBitmapHeader)
{
    std::ifstream bitmapStream{"basic.bmp", std::ios::binary};
    CHECK(bitmapStream.is_open());
    
    WindowsBitmapHeader bitmapHeader;
    bitmapHeader.readFileHeader(bitmapStream);

    // The "basic.bmp" image is 100x100 = 10000 pixels.
    // Each pixel is 3 bytes (1 red, 1 green, 1 blue),
    // so the bitmap image pixel data is 30000 bytes.
    // The header data is 54 bytes, so we expect 30054
    // total file size.
    
    CHECK_EQUAL(30054, bitmapHeader.getFileSize());
    
    // We could also check the file size this way:
    
    bitmapStream.seekg(0, std::ifstream::end);
	CHECK_EQUAL(int(bitmapStream.tellg()), bitmapHeader.getFileSize());
}

TEST(InfoHeaderTest, WindowBitmapHeader)
{
    std::ifstream bitmapStream{"basic.bmp", std::ios::binary};
    CHECK(bitmapStream.is_open());
    
    WindowsBitmapHeader bitmapHeader;
    bitmapHeader.readFileHeader(bitmapStream);
    bitmapHeader.readInfoHeader(bitmapStream);

    CHECK_EQUAL(100, bitmapHeader.getBitmapHeight());
    CHECK_EQUAL(100, bitmapHeader.getBitmapWidth());
}

// --- Repeat similar tests for 101x101 bitmap

TEST(FileHeaderTest_101, WindowsBitmapHeader)
{
    std::ifstream bitmapStream{"basic_101.bmp", std::ios::binary};
    CHECK(bitmapStream.is_open());
    
    WindowsBitmapHeader bitmapHeader;
    bitmapHeader.readFileHeader(bitmapStream);
        
    bitmapStream.seekg(0, std::ifstream::end);
    CHECK_EQUAL(int(bitmapStream.tellg()), bitmapHeader.getFileSize());
}

TEST(InfoHeaderTest_101, WindowBitmapHeader)
{
    std::ifstream bitmapStream{"basic_101.bmp", std::ios::binary};
    CHECK(bitmapStream.is_open());
    
    WindowsBitmapHeader bitmapHeader;
    bitmapHeader.readFileHeader(bitmapStream);
    bitmapHeader.readInfoHeader(bitmapStream);
    
    CHECK_EQUAL(101, bitmapHeader.getBitmapHeight());
    CHECK_EQUAL(101, bitmapHeader.getBitmapWidth());
}

TEST(constructHeaderFromStream, WindowsBitmapHeader)
{
    std::ifstream bitmapStream{"basic.bmp", std::ios::binary};
    CHECK(bitmapStream.is_open());
    
    // I created a constructor that automatically reads the entire header from a stream
    WindowsBitmapHeader bitmapHeader{bitmapStream};

    CHECK_EQUAL(30054, bitmapHeader.getFileSize());
    CHECK_EQUAL(100, bitmapHeader.getBitmapHeight());
    CHECK_EQUAL(100, bitmapHeader.getBitmapWidth());
}

TEST(constructHeaderFromStream_101, WindowsBitmapHeader)
{
    std::ifstream bitmapStream{"basic_101.bmp", std::ios::binary};
    CHECK(bitmapStream.is_open());
    
    WindowsBitmapHeader bitmapHeader{bitmapStream};
    
    CHECK_EQUAL(30758, bitmapHeader.getFileSize());
    CHECK_EQUAL(101, bitmapHeader.getBitmapHeight());
    CHECK_EQUAL(101, bitmapHeader.getBitmapWidth());
}
