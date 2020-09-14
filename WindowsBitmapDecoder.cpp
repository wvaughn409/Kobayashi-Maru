#include "WindowsBitmapDecoder.h"
#include "BitmapIterator.h"
#include "WindowsBitmapHeader.h"
#include "WindowsBitmapCommon.h"

namespace BitmapGraphics
{
    // This constructor is used to create the prototype.
    // Initialize mySourceStream to an empty stringstream,
    // and set its state to "bad".
    // If a client attempts to use a decoder with bad stream,
    // we'll throw an exception.
    //
    WindowsBitmapDecoder::WindowsBitmapDecoder() = default;

    WindowsBitmapDecoder::WindowsBitmapDecoder(std::istream& sourceStream)
    {
        decodeIntoBitmap(sourceStream);
    }

    HBitmapDecoder WindowsBitmapDecoder::clone(std::istream& sourceStream)
    {
        return std::make_unique<WindowsBitmapDecoder>(sourceStream);
    }

    HBitmapIterator WindowsBitmapDecoder::createIterator()
    {
        if (myBitmap)
        {
            return myBitmap->createIterator();
        }

        throw std::runtime_error("No decoded bitmap present");
    }

    void WindowsBitmapDecoder::decodeIntoBitmap(std::istream& sourceStream)
    {
        try
        {
            const WindowsBitmapHeader bitmapHeader{ sourceStream };

            myBitmap = std::make_unique<Bitmap>(static_cast<uint32_t>(bitmapHeader.getBitmapWidth()), static_cast<uint32_t>(bitmapHeader.getBitmapHeight()));

            for (auto row = 0; row < myBitmap->getHeight(); ++row)
            {
                Bitmap::ScanLine scanLine;
                scanLine.reserve(myBitmap->getWidth());

                // Read row of pixels
                for (auto column = 0; column < myBitmap->getWidth(); ++column)
                {
                    scanLine.emplace_back(Color::read(sourceStream));
                }

                // Read and ignore pad bytes (if any)
                for (auto pad = 0; pad < numberOfPadBytes(myBitmap->getWidth()); ++pad)
                {
                    Binary::Byte::read(sourceStream);
                }

                myBitmap->addScanLine(std::move(scanLine));
            }
        }
        catch(const std::exception &)
        {
            // If we fail parsing, discard the bitmap.
            myBitmap.reset();
        }
    }

    const std::string& WindowsBitmapDecoder::getMimeType() const
    {
        return WindowsBitmapMimeType;
    }

    bool WindowsBitmapDecoder::isSupported(const std::string& firstChunk) const
    {
        if (firstChunk.size() < 2)
        {
            return false;
        }

        return firstChunk[0] == 'B' && firstChunk[1] == 'M';
    }

}