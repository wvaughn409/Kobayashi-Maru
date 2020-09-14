#include "Scene.h"

namespace Framework
{
    
    Scene::Scene(const int width, const int height) :
    myWidth{width},
    myHeight{height}
    {
    }
    
    void Scene::remove(const Layer& layer)
    {
        myLayers.remove(layer);
    }
    
    Scene::LayerIterator Scene::begin() const
    {
        return myLayers.begin();
    }
    
    Scene::LayerIterator Scene::end() const
    {
        return myLayers.end();
    }
    
    int Scene::getWidth() const
    {
        return myWidth;
    }
    
    int Scene::getHeight() const
    {
        return myHeight;
    }
    
}
