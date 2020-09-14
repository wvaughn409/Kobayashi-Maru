#pragma once

#include "IBitmapIterator.h"
#include "Color.h"
#include <vector>

namespace BitmapGraphics
{
    class Bitmap
    {
    public:
        using ScanLine = std::vector<Color>;
        using PixelIterator = ScanLine::iterator;

    private:
        using ScanLineCollection = std::vector<ScanLine>;

    public:
        using ScanLineIterator = ScanLineCollection::iterator;

        // Construct empty bitmap -- will be filled by decoder
        Bitmap() = default;
        Bitmap(const int width, const int height) : myWidth{ width }, myHeight{ height } { }

        Bitmap(const Bitmap&) = default;
        Bitmap(Bitmap&&) = default;
        ~Bitmap() = default;

        Bitmap& operator=(const Bitmap&) = default;
        Bitmap& operator=(Bitmap&&) = default;

        template<class SL> void addScanLine(SL&& scanLine)
        {
            myScanLines.push_back(std::forward<SL>(scanLine));
        }

        ScanLineIterator begin();
        ScanLineIterator end();

        int getWidth() const { return myWidth; }
        int getHeight() const { return myHeight; }

        HBitmapIterator createIterator();

    private:
        int myWidth{ 0 };
        int myHeight{ 0 };

        ScanLineCollection myScanLines;
    };

    using HBitmap = std::unique_ptr<Bitmap>;
}
