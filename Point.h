#pragma once

#include <iosfwd>

namespace VG
{
    class Point
    {
    public:
        constexpr Point(int x, int y) : myX{ x }, myY{ y } { }

        Point(const Point& other) = default;
        Point(Point&& other) = default;
        ~Point() = default;

        Point& operator=(const Point&) = default;
        Point& operator=(Point&&) = default;

        constexpr int getX() const { return myX; }
        constexpr int getY() const { return myY; }

    private:
        int myX{ 0 };
        int myY{ 0 };
    };

    bool operator==(const Point& lhs, const Point& rhs);
    bool operator!=(const Point& lhs, const Point& rhs);

    std::ostream& operator<<(std::ostream& os, const Point& p);
}
