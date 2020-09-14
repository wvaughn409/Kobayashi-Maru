#include "CodecLibrary.h"

#include <iostream>

namespace
{
    const int ChunkSize{ 100 };
}

namespace BitmapGraphics
{

    void CodecLibrary::registerEncoder(HBitmapEncoder encoder)
    {
        myEncoders.push_back(std::move(encoder));
    }

    void CodecLibrary::registerDecoder(HBitmapDecoder decoder)
    {
        myDecoders.push_back(std::move(decoder));
    }

    // auto determination version of createDecoder
    HBitmapDecoder CodecLibrary::createDecoder(std::istream& sourceStream)
    {
        // get first chunk to use for type determination
        char firstChunk[ChunkSize]{};
        sourceStream.get(firstChunk, ChunkSize);

        // reposition stream back to beginning
        sourceStream.clear();
        sourceStream.seekg(std::istream::beg);

        for (const auto& decoder : myDecoders)
        {
            if (decoder->isSupported(firstChunk))
            {
                return decoder->clone(sourceStream);
            }
        }

        throw std::runtime_error{ "No decoder for source stream" };
    }

    // mime type version of createDecoder
    HBitmapDecoder CodecLibrary::createDecoder(const std::string& mimeType,
        std::istream& sourceStream)
    {
        for (const auto& decoder : myDecoders)
        {
            if (decoder->getMimeType() == mimeType)
            {
                return decoder->clone(sourceStream);
            }
        }

        throw std::runtime_error{ "No decoder for " + mimeType };
    }

    HBitmapEncoder CodecLibrary::createEncoder(
        const std::string& mimeType,
        HBitmapIterator bitmapIterator)
    {
        for (const auto& encoder : myEncoders)
        {
            if (encoder->getMimeType() == mimeType)
            {
                return encoder->clone(std::move(bitmapIterator));
            }
        }

        throw std::runtime_error{ "No encoder for " + mimeType };
    }

}