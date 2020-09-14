#include "Layer.h"

namespace Framework
{
    
    Layer::Layer(const std::string& alias) :
    myAlias(alias)
    {
    }
    
    void Layer::remove(const PlacedGraphic& placedGraphic)
    {
        myGraphics.remove(placedGraphic);
    }
    
    Layer::PlacedGraphicIterator Layer::begin() const
    {
        return myGraphics.begin();
    }
    
    Layer::PlacedGraphicIterator Layer::end() const
    {
        return myGraphics.end();
    }
    
    std::string Layer::getAlias() const
    {
        return myAlias;
    }
    
    bool Layer::operator==(const Layer& rhs) const
    {
        return (myAlias == rhs.myAlias) && (myGraphics == rhs.myGraphics);
    }
    
    bool Layer::operator!=(const Layer& rhs) const
    {
        return !operator==(rhs);
    }
    
}
