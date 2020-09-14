#pragma once


//TODO: should not have to include this next header
#include "ICanvas.h"

#include "Point.h"
#include "VectorGraphic.h"

namespace Framework
{
    
    class PlacedGraphic
    {
    public:
        PlacedGraphic(const VG::Point& placement,
                      const VG::HVectorGraphic & graphic);

        PlacedGraphic(VG::Point && placement,
            VG::HVectorGraphic && graphic);

        PlacedGraphic();

		PlacedGraphic(const PlacedGraphic& other) = default;
		PlacedGraphic(PlacedGraphic&& other) = default;
        ~PlacedGraphic() = default;

		PlacedGraphic & operator=(const PlacedGraphic&) = default;
		PlacedGraphic & operator=(PlacedGraphic&&) = default;

		void draw(BitmapGraphics::HCanvas& canvas) const;


		template<class P> void setPlacementPoint(P&& p)
		{
			myPlacementPoint = std::forward<P>(p);
		}

        const VG::Point& getPlacementPoint() const;

		template<class VG> void setGraphic(VG&& graphic)
		{
			myGraphic = std::forward<VG>(graphic);
		}

        const VG::VectorGraphic& getGraphic() const;
        
    private:

        friend bool operator==(const PlacedGraphic& lhs, const PlacedGraphic& rhs);

        VG::Point myPlacementPoint;
        VG::HVectorGraphic myGraphic;
    };
    
    bool operator==(const PlacedGraphic& lhs, const PlacedGraphic& rhs);
    bool operator!=(const PlacedGraphic& lhs, const PlacedGraphic& rhs);
}
