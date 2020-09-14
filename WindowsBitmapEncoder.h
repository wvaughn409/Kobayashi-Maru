#pragma once

#include "IBitmapEncoder.h"

namespace BitmapGraphics
{
    class WindowsBitmapEncoder final : public IBitmapEncoder
    {
    public:
        // This constructor is used to create the prototype.
        // myBitmapIterator will be unitialized.
        // If a client attempts to use an encoder with an
        // unitialized iterator, we'll throw an exception.
        //
        WindowsBitmapEncoder() = default;

        explicit WindowsBitmapEncoder(HBitmapIterator bitmapIterator);

        HBitmapEncoder clone(HBitmapIterator bitmapIterator) override;

        void encodeToStream(std::ostream& destinationStream) override;

        const std::string& getMimeType() const override;

    private:
        HBitmapIterator myBitmapIterator;

        void writePadBytes(std::ostream& destinationStream) const;
    };
}