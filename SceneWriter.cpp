#include "XmlInterfaces.h"
#include "XmlFactories.h"
#include "SceneWriter.h"
#include "Scene.h"
#include "VectorGraphic.h"
#include <sstream>
#include <string>

using namespace std;

namespace Framework
{
    
    Xml::HElement SceneWriter::writeScene(const Scene& scene)
    {
		Xml::HElement root(Xml::ElementFactory::createElement("Scene"));        
        root->setAttribute("width", to_string(scene.getWidth()));
        root->setAttribute("height", to_string(scene.getHeight()));
        
        for (auto &&layer : scene)
        {
            Xml::HElement layerElement(root->appendChild("Layer"));
            layerElement->setAttribute("alias", layer.getAlias());
            
            Layer::PlacedGraphicIterator iPlacedGraphic;
            for (iPlacedGraphic = layer.begin(); iPlacedGraphic != layer.end(); ++iPlacedGraphic)
            {
                const PlacedGraphic& placedGraphic = *iPlacedGraphic;
                Xml::HElement placedGraphicElement(layerElement->appendChild("PlacedGraphic"));
                const auto& placementPoint = placedGraphic.getPlacementPoint();
                placedGraphicElement->setAttribute("x", to_string(placementPoint.getX()));
                placedGraphicElement->setAttribute("y", to_string(placementPoint.getY()));
                
                Xml::HElement vectorGraphicElement(placedGraphicElement->appendChild("VectorGraphic"));
                const auto& vectorGraphic = placedGraphic.getGraphic();

                ostringstream ss;
                ss << boolalpha << vectorGraphic.isClosed();
				vectorGraphicElement->setAttribute("closed", ss.str());
                
                for (auto i = 0u; i < vectorGraphic.getPointCount(); ++i)
                {
                    const auto& p = vectorGraphic.getPoint(i);
                    Xml::HElement pointElement(vectorGraphicElement->appendChild("Point"));
                    pointElement->setAttribute("x", to_string(p.getX()));
                    pointElement->setAttribute("y", to_string(p.getY()));
                }                               
            }
            
        }
        
        return root;
    }
}