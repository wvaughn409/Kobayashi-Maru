//
//  WindowsBitmapCommon.h
//  Assignment4
//
//  Created by Chris Elderkin on 5/9/14.
//  Copyright (c) 2014 Chris Elderkin. All rights reserved.
//
#pragma once

namespace BitmapGraphics
{
    const std::string WindowsBitmapMimeType{ "image/x-ms-bmp" };

    inline int numberOfPadBytes(const int widthInPixels)
    {
        const auto remainder{ (widthInPixels * 3) % 4 };
        return (remainder == 0) ? 0 : (4 - remainder);
    }
}