#pragma once

#include "IBitmapIterator.h"
#include "Bitmap.h"

namespace BitmapGraphics
{
    class BitmapIterator final : public IBitmapIterator
    {
    public:
        explicit BitmapIterator(Bitmap& bitmap);

        void nextScanLine() override;
        bool isEndOfImage() const override;
        void nextPixel() override;
        bool isEndOfScanLine() const override;
        Color getColor() const override;

        int getBitmapWidth() const override;
        int getBitmapHeight() const override;

    private:
        Bitmap& myBitmap;
        Bitmap::ScanLineIterator myScanLine;
        Bitmap::PixelIterator myPixel;
    };
}