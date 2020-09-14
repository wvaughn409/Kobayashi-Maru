#pragma once

#include "IBitmapIterator.h"
#include <memory>
#include <string>

namespace BitmapGraphics
{
    class IBitmapEncoder;

    using HBitmapEncoder = std::unique_ptr<IBitmapEncoder>;

    class IBitmapEncoder
    {
    public:
        IBitmapEncoder() = default;
        virtual ~IBitmapEncoder() = default;

        IBitmapEncoder(const IBitmapEncoder&) = delete;
        IBitmapEncoder& operator =(IBitmapEncoder const&) = delete;
        IBitmapEncoder(IBitmapEncoder&&) = delete;
        IBitmapEncoder& operator=(IBitmapEncoder&&) = delete;

        virtual HBitmapEncoder clone(HBitmapIterator bitmapIterator) = 0;

        virtual void encodeToStream(std::ostream& os) = 0;

        virtual const std::string& getMimeType() const = 0;
    };
}