#pragma once

//TODO: should not have to include this next header
#include "ICanvas.h"

#include "Point.h"

#include <memory>
#include <vector>

namespace BitmapGraphics 
{ 
    class ICanvas; 
}

namespace VG
{
    using Points = std::vector<Point>;
    
    class VectorGraphic
    {
    public:
        VectorGraphic();
        
		VectorGraphic(const VectorGraphic& other) = default;
		VectorGraphic(VectorGraphic&& other) = default;
        ~VectorGraphic() = default;

		VectorGraphic& operator=(const VectorGraphic&) = default;
		VectorGraphic& operator=(VectorGraphic&&) = default;

		void draw(BitmapGraphics::HCanvas& canvas, const Point& offset) const;


		template<class C> void addPoint(C&& p)
		{
			myPath.emplace_back(std::forward<C>(p));
		}

        void removePoint(const Point& p);
        void erasePoint(int index);
        
        void openShape();
        void closeShape();
        
        bool isOpen() const;
        bool isClosed() const;
        
        int getWidth() const;
        int getHeight() const;
        
        size_t getPointCount() const;
        const Point& getPoint(int index) const;
        
        bool operator==(const VectorGraphic& rhs) const;
        bool operator!=(const VectorGraphic& rhs) const;
        
    private:
        Points myPath;
        
        enum class ShapeStyle { Open, Closed } myShapeStyle;
    };
 
    using HVectorGraphic = std::shared_ptr<VectorGraphic>;
}
