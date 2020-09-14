#include "VectorGraphic.h"

#include <algorithm>
#include <stdexcept>

namespace VG
{
    VectorGraphic::VectorGraphic() :
        myShapeStyle{ ShapeStyle::Closed }
    {
    }

    bool VectorGraphic::isOpen() const
    {
        return myShapeStyle == ShapeStyle::Open;
    }

    bool VectorGraphic::isClosed() const
    {
        return myShapeStyle == ShapeStyle::Closed;
    }

    void VectorGraphic::openShape()
    {
        myShapeStyle = ShapeStyle::Open;
    }

    void VectorGraphic::closeShape()
    {
        myShapeStyle = ShapeStyle::Closed;
    }

    int VectorGraphic::getWidth() const
    {
        // returns iterators to the min and max element as a std::pair
        // uses the structured binding to make the access a little more clean
        auto [minIt, maxIt] = std::minmax_element(myPath.cbegin(), myPath.cend(),
            [](Point const& lhs, Point const& rhs) {return lhs.getX() < rhs.getX();  });

        return !myPath.empty() ? maxIt->getX() - minIt->getX() : 0;
    }

    int VectorGraphic::getHeight() const
    {
        auto [minIt, maxIt] = std::minmax_element(myPath.cbegin(), myPath.cend(),
            [](Point const& lhs, Point const& rhs) {return lhs.getY() < rhs.getY();  });

        return !myPath.empty() ? maxIt->getY() - minIt->getY() : 0;
    }

    size_t VectorGraphic::getPointCount() const
    {
        return myPath.size();
    }

    const Point& VectorGraphic::getPoint(int index) const
    {
        return myPath.at(index); // throws std::out_of_range if index out of range
    }

    void VectorGraphic::removePoint(const Point& p)
    {
        const auto newEnd = std::remove(myPath.begin(), myPath.end(), p);

        if (newEnd == myPath.end())
        {
            throw std::invalid_argument("the point to remove does not appear in the vectorgraphic.");
        }

        myPath.erase(newEnd, myPath.end());
    }

    void VectorGraphic::erasePoint(int index)
    {
        if (index >= 0 && static_cast<std::size_t>(index) < myPath.size())
        {
            const auto pos = myPath.begin() + index;
            myPath.erase(pos);
        }
        else
        {
            throw std::out_of_range{ "index out of range" };
        }
    }

    bool VectorGraphic::operator==(const VectorGraphic& rhs) const
    {
        return (myPath == rhs.myPath) && (myShapeStyle == rhs.myShapeStyle);
    }

    bool VectorGraphic::operator!=(const VectorGraphic& rhs) const
    {
        return !(*this == rhs);
    }
}
