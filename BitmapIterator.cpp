#include "BitmapIterator.h"

namespace BitmapGraphics
{
    BitmapIterator::BitmapIterator(Bitmap& bitmap) :
        myBitmap{ bitmap },
        myScanLine{ bitmap.begin() }
    {
        if (!BitmapIterator::isEndOfImage())
        {
            myPixel = myScanLine->begin();
        }
    }

    void BitmapIterator::nextScanLine()
    {
        ++myScanLine;
        if (!isEndOfImage())
        {
            myPixel = myScanLine->begin();
        }
    }

    bool BitmapIterator::isEndOfImage() const
    {
        return myScanLine == myBitmap.end();
    }

    void BitmapIterator::nextPixel()
    {
        ++myPixel;
    }

    bool BitmapIterator::isEndOfScanLine() const
    {
        return myPixel == myScanLine->end();
    }

    Color BitmapIterator::getColor() const
    {
        return *myPixel;
    }

    int BitmapIterator::getBitmapWidth() const
    {
        return myBitmap.getWidth();
    }

    int BitmapIterator::getBitmapHeight() const
    {
        return myBitmap.getHeight();
    }

}
