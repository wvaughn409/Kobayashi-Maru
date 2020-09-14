#pragma once

#include "Byte.h"
#include "DoubleWord.h"
#include <istream>

namespace BitmapGraphics
{
    class WindowsBitmapHeader
    {
    public:
        explicit WindowsBitmapHeader(int width = 0, int height = 0);
        explicit WindowsBitmapHeader(std::istream& sourceStream);

        void readFileHeader(std::istream& sourceStream);
        void writeFileHeader(std::ostream& destinationStream) const;

        void readInfoHeader(std::istream& sourceStream);
        void writeInfoHeader(std::ostream& destinationStream) const;

        void read(std::istream& sourceStream);
        void write(std::ostream& destinationStream) const;

        Binary::DoubleWord getFileSize() const 
        { 
            return fileSize; 
        }
        Binary::DoubleWord getBitmapWidth() const 
        { 
            return bitmapWidth; 
        }
        Binary::DoubleWord getBitmapHeight() const 
        { 
            return bitmapHeight; 
        }

    private:
        // file header
        const static Binary::Byte firstIdentifier;
        const static Binary::Byte secondIdentifier;
        Binary::DoubleWord fileSize;
        const static Binary::DoubleWord reserved;
        const static Binary::DoubleWord rawImageByteOffset;

        // info header
        const static Binary::DoubleWord infoHeaderBytes;
        Binary::DoubleWord bitmapWidth;
        Binary::DoubleWord bitmapHeight;
        const static Binary::Word numberOfPlanes;
        const static Binary::Word bitsPerPixel;
        const static Binary::DoubleWord compressionType;
        const static Binary::DoubleWord compressedImageSize;
        const static Binary::DoubleWord horizontalPixelsPerMeter;
        const static Binary::DoubleWord verticalPixelsPerMeter;
        const static Binary::DoubleWord numberOfColors;
        const static Binary::DoubleWord numberOfImportantColors;
    };
}