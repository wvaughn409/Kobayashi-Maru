#pragma once

#include "IBitmapIterator.h"
#include <memory>
#include <string>

namespace BitmapGraphics
{
    class BitmapIteratorDecorator;
    class IBitmapDecoder;
    using HBitmapDecoder = std::unique_ptr<IBitmapDecoder>;

    class IBitmapDecoder
    {
    public:
        IBitmapDecoder() = default;
        virtual ~IBitmapDecoder() = default;

        IBitmapDecoder(const IBitmapDecoder&) = delete;
        IBitmapDecoder& operator =(IBitmapDecoder const&) = delete;
        IBitmapDecoder(IBitmapDecoder&&) = delete;
        IBitmapDecoder& operator=(IBitmapDecoder&&) = delete;

        virtual HBitmapDecoder clone(std::istream& sourceStream) = 0;

        virtual HBitmapIterator createIterator() = 0;

        virtual const std::string& getMimeType() const = 0;

        virtual bool isSupported(const std::string& firstChunk) const = 0;
    };
}