#include "Color.h"

namespace BitmapGraphics
{

    Color::Color(
        const Binary::Byte& red,
        const Binary::Byte& green,
        const Binary::Byte& blue) noexcept :
        myRed{ red },
        myGreen{ green },
        myBlue{ blue }
    {
    }

    Color Color::read(std::istream& sourceStream)
    {
        Color color;

        color.myBlue = Binary::Byte::read(sourceStream);
        color.myGreen = Binary::Byte::read(sourceStream);
        color.myRed = Binary::Byte::read(sourceStream);

        return color;
    }

    void Color::write(std::ostream& destinationStream) const
    {
        myBlue.write(destinationStream);
        myGreen.write(destinationStream);
        myRed.write(destinationStream);
    }

    bool Color::operator==(const Color& rhs) const
    {
        return getRed() == rhs.getRed() && (getGreen() == rhs.getGreen()) && (getBlue() == rhs.getBlue());
    }

    std::ostream& operator<<(std::ostream& os, const Color& color)
    {
        color.write(os);
        return os;
    }

}
