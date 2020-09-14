#pragma once

#include "IBitmapDecoder.h"
#include "Bitmap.h"

namespace BitmapGraphics
{
    class WindowsBitmapDecoder final : public IBitmapDecoder
    {
    public:
        WindowsBitmapDecoder();

        explicit WindowsBitmapDecoder(std::istream& sourceStream);

        HBitmapDecoder clone(std::istream& sourceStream) override;

        HBitmapIterator createIterator() override;

        const std::string& getMimeType() const override;

        bool isSupported(const std::string& firstChunk) const override;

    private:
        HBitmap myBitmap;

        void decodeIntoBitmap(std::istream &sourceStream);
    };

}