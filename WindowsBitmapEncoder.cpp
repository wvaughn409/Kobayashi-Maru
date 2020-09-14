#include "WindowsBitmapEncoder.h"
#include "WindowsBitmapHeader.h"
#include "WindowsBitmapCommon.h"
#include "Color.h"

namespace BitmapGraphics
{
    WindowsBitmapEncoder::WindowsBitmapEncoder(HBitmapIterator bitmapIterator)
        : myBitmapIterator{ std::move(bitmapIterator) }
    {
    }

    HBitmapEncoder WindowsBitmapEncoder::clone(HBitmapIterator bitmapIterator)
    {
        return std::make_unique<WindowsBitmapEncoder>(std::move(bitmapIterator));
    }

    void WindowsBitmapEncoder::encodeToStream(std::ostream& destinationStream)
    {
        if (!myBitmapIterator.get())
        {
            throw std::runtime_error{ "Invalid encoder: null iterator" };
        }

        const WindowsBitmapHeader bitmapHeader{ myBitmapIterator->getBitmapWidth(), myBitmapIterator->getBitmapHeight() };
        bitmapHeader.write(destinationStream);

        while (!myBitmapIterator->isEndOfImage())
        {
            while (!myBitmapIterator->isEndOfScanLine())
            {
                myBitmapIterator->getColor().write(destinationStream);
                myBitmapIterator->nextPixel();
            }

            writePadBytes(destinationStream);
            myBitmapIterator->nextScanLine();
        }
    }

    const std::string& WindowsBitmapEncoder::getMimeType() const
    {
        return WindowsBitmapMimeType;
    }

    void WindowsBitmapEncoder::writePadBytes(std::ostream& destinationStream) const
    {
        const Binary::Byte padByte{};
        for (auto i = 0; i < numberOfPadBytes(myBitmapIterator->getBitmapWidth()); ++i)
        {
            padByte.write(destinationStream);
        }
    }
}