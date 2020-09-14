#include "SceneReader.h"
#include "Scene.h"
#include "XmlInterfaces.h"
#include "VectorGraphic.h"
#include <sstream>

namespace
{
    int toInt(const std::string& s)
    {
        int value;
        std::stringstream ss(s);
        ss >> value;
        
        return value;
    }
    
    VG::VectorGraphic readVectorGraphic(const Xml::HElement &vgElement)
    {
        VG::VectorGraphic vg;
        
        const std::string closed = vgElement->getAttribute("closed");
        if (closed == "true")
        {
            vg.closeShape();
        }
        else if (closed == "false")
        {
            vg.openShape();
        }
        else
        {
            throw std::runtime_error("Invalid VectorGraphic attribute");
        }
        
        const auto points = vgElement->getChildElements();

        for (auto &&p : points)
        {
            const auto x = toInt(p->getAttribute("x"));
            const auto y = toInt(p->getAttribute("y"));
			vg.addPoint(VG::Point(x, y));
        }
        
        return vg;
    }
    
    void readGraphic(Framework::Scene& scene,
                     Framework::Layer& layer,
                     const Xml::HElement &graphicElement)
    {
        if (graphicElement->getName() != "PlacedGraphic")
        {
            throw std::runtime_error("Expected PlacedGraphic");
        }
        
        Framework::PlacedGraphic pg;
        const int x = toInt(graphicElement->getAttribute("x"));
        const int y = toInt(graphicElement->getAttribute("y"));
        
        if (x < 0 || y < 0 ||
            x > scene.getWidth() || y > scene.getHeight())
        {
            throw std::runtime_error("PlacedGraphic out of bounds");
        }
        
        pg.setPlacementPoint(VG::Point(x, y));
        
        const auto vectorGraphics = graphicElement->getChildElements();

        if (vectorGraphics.size() > 1u)
        {
            throw std::runtime_error("PlacedGraphic: too many VectorGraphic nodes");
        }

        for (auto && vgElement : vectorGraphics)
        {
            pg.setGraphic(std::make_shared<VG::VectorGraphic>(readVectorGraphic(vgElement)));
        }
        
        layer.pushBack(pg);
    }
    
    void readLayer(Framework::Scene& scene,
                   const Xml::HElement &layerElement)
    {
        if (layerElement->getName() != "Layer")
        {
            throw std::runtime_error("Expected Layer");
        }
        
        Framework::Layer layer(layerElement->getAttribute("alias"));
        
        const auto graphics = layerElement->getChildElements();

        for (auto &&graphic : graphics)
        {
            readGraphic(scene, layer, graphic);
        }
        
        scene.pushBack(layer);
    }
}

namespace Framework
{

Scene SceneReader::readScene(const Xml::IElement& rootElement)
{
    if (rootElement.getName() != "Scene")
    {
        throw std::runtime_error("Expected Scene");
    }
    
    const int width = toInt(rootElement.getAttribute("width"));
    const int height = toInt(rootElement.getAttribute("height"));
    Scene theScene(width, height);
    
    const auto layers = rootElement.getChildElements();

    for(auto &&layer : layers)
    {
		readLayer(theScene, layer);
    }
    
    return theScene;
}

}