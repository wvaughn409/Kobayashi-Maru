#include "WindowsBitmapHeader.h"
#include "VerifyEquality.h"

namespace BitmapGraphics
{
    // File header fields
    const Binary::Byte WindowsBitmapHeader::firstIdentifier{ 'B' };
    const Binary::Byte WindowsBitmapHeader::secondIdentifier{ 'M' };
    const Binary::DoubleWord WindowsBitmapHeader::reserved{ 0 };
    const Binary::DoubleWord WindowsBitmapHeader::rawImageByteOffset{ 54 };

    // Info header fields
    const Binary::DoubleWord WindowsBitmapHeader::infoHeaderBytes{ 40 };
    const Binary::Word WindowsBitmapHeader::numberOfPlanes{ 1 };
    const Binary::Word WindowsBitmapHeader::bitsPerPixel{ 24 };
    const Binary::DoubleWord WindowsBitmapHeader::compressionType{ 0 };
    // ... these we don't care about the values so just set to 0
    const Binary::DoubleWord WindowsBitmapHeader::compressedImageSize{ 0 };
    const Binary::DoubleWord WindowsBitmapHeader::horizontalPixelsPerMeter{ 0 };
    const Binary::DoubleWord WindowsBitmapHeader::verticalPixelsPerMeter{ 0 };
    const Binary::DoubleWord WindowsBitmapHeader::numberOfColors{ 0 };
    const Binary::DoubleWord WindowsBitmapHeader::numberOfImportantColors{ 0 };


    WindowsBitmapHeader::WindowsBitmapHeader(const int width, const int height) :
        bitmapWidth(width),
        bitmapHeight(height)
    {
        const auto rowStride = ((width * static_cast<uint16_t>(bitsPerPixel) + 31) / 32) * 4;

        fileSize = Binary::DoubleWord(rowStride * height + static_cast<uint32_t>(rawImageByteOffset));
    }

    WindowsBitmapHeader::WindowsBitmapHeader(std::istream& sourceStream)
    {
        read(sourceStream);
    }

    void WindowsBitmapHeader::read(std::istream& sourceStream)
    {
        readFileHeader(sourceStream);
        readInfoHeader(sourceStream);
    }

    void WindowsBitmapHeader::readFileHeader(std::istream& sourceStream)
    {
        verifyEquality(firstIdentifier, Binary::Byte::read(sourceStream), "firstIdentifier");
        verifyEquality(secondIdentifier, Binary::Byte::read(sourceStream), "secondIdentifier");
        fileSize = Binary::DoubleWord::readLittleEndian(sourceStream);
        verifyEquality(reserved, Binary::DoubleWord::readLittleEndian(sourceStream), "reserved");
        verifyEquality(rawImageByteOffset, Binary::DoubleWord::readLittleEndian(sourceStream), "rawImageByteOffset");
    }

    void WindowsBitmapHeader::writeFileHeader(std::ostream& destinationStream) const
    {
        firstIdentifier.write(destinationStream);
        secondIdentifier.write(destinationStream);
        fileSize.writeLittleEndian(destinationStream);
        reserved.writeLittleEndian(destinationStream);
        rawImageByteOffset.writeLittleEndian(destinationStream);
    }

    void WindowsBitmapHeader::readInfoHeader(std::istream& sourceStream)
    {
        verifyEquality(infoHeaderBytes, Binary::DoubleWord::readLittleEndian(sourceStream), "infoHeaderBytes");
        bitmapWidth = Binary::DoubleWord::readLittleEndian(sourceStream);
        bitmapHeight = Binary::DoubleWord::readLittleEndian(sourceStream);
        verifyEquality(numberOfPlanes, Binary::Word::readLittleEndian(sourceStream), "numberOfPlanes");
        verifyEquality(bitsPerPixel, Binary::Word::readLittleEndian(sourceStream), "bitsPerPixel");
        verifyEquality(compressionType, Binary::DoubleWord::readLittleEndian(sourceStream), "compressionType");
        Binary::DoubleWord::readLittleEndian(sourceStream); // compressedImageSize
        Binary::DoubleWord::readLittleEndian(sourceStream); // horizontalPixelsPerMeter
        Binary::DoubleWord::readLittleEndian(sourceStream); // verticalPixelsPerMeter
        Binary::DoubleWord::readLittleEndian(sourceStream); // numberOfColors
        Binary::DoubleWord::readLittleEndian(sourceStream); // numberOfImportantColors
    }

    void WindowsBitmapHeader::writeInfoHeader(std::ostream& destinationStream) const
    {
        infoHeaderBytes.writeLittleEndian(destinationStream);
        bitmapWidth.writeLittleEndian(destinationStream);
        bitmapHeight.writeLittleEndian(destinationStream);
        numberOfPlanes.writeLittleEndian(destinationStream);
        bitsPerPixel.writeLittleEndian(destinationStream);
        compressionType.writeLittleEndian(destinationStream);
        compressedImageSize.writeLittleEndian(destinationStream);
        horizontalPixelsPerMeter.writeLittleEndian(destinationStream);
        verticalPixelsPerMeter.writeLittleEndian(destinationStream);
        numberOfColors.writeLittleEndian(destinationStream);
        numberOfImportantColors.writeLittleEndian(destinationStream);
    }

    void WindowsBitmapHeader::write(std::ostream& destinationStream) const
    {
        writeFileHeader(destinationStream);
        writeInfoHeader(destinationStream);
    }
}
