#pragma once

#include "SizedWord.h"
#include "narrow_cast.h"

namespace Binary
{
    using Byte = SizedWord<std::uint8_t>;
}

// user defined literal constant. E.g., 5_byte.
constexpr Binary::Byte operator ""_byte(const unsigned long long ch)
{
    return Binary::Byte(narrow_cast<std::uint8_t>(ch));
}