#include "PlacedGraphic.h"
#include <memory>

namespace Framework
{
    PlacedGraphic::PlacedGraphic() :
        myPlacementPoint{ 0, 0 },
        myGraphic( std::make_shared<VG::VectorGraphic>())
    {
    }
    
    PlacedGraphic::PlacedGraphic(const VG::Point& placement,
                                 const VG::HVectorGraphic& graphic) :
		myPlacementPoint{ placement },
		myGraphic{ graphic }
    {
        if(!myGraphic)
        {
            myGraphic = std::make_shared<VG::VectorGraphic>();
        }
    }

    PlacedGraphic::PlacedGraphic(VG::Point && placement,
        VG::HVectorGraphic&& graphic) :
        myPlacementPoint{ placement },
        myGraphic{ std::move(graphic) }
    {
        if (!myGraphic)
        {
            myGraphic = std::make_shared<VG::VectorGraphic>();
        }
    }

    const VG::Point& PlacedGraphic::getPlacementPoint() const
    {
        return myPlacementPoint;
    }
    
    const VG::VectorGraphic& PlacedGraphic::getGraphic() const
    {
        return *myGraphic;
    }
    
    bool operator==(const PlacedGraphic& lhs, const PlacedGraphic& rhs)
    {
        return (lhs.getPlacementPoint() == rhs.getPlacementPoint()) &&
               (lhs.getGraphic() == rhs.getGraphic());
    }
    
    bool operator!=(const PlacedGraphic& lhs, const PlacedGraphic& rhs)
    {
        return !(lhs == rhs);
    }
}

