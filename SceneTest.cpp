#include "Scene.h"
#include "TestHarness.h"
#include <algorithm>

struct LayerMatcher
{
    LayerMatcher() :
    myMountainsFound(false),
    mySeaFound(false),
    mySkyFound(false)
    {
    }
    
    void operator()(const Framework::Layer& layer)
    {
        if (layer.getAlias() == "Mountains")
        {
            myMountainsFound = true;
        }
        else if (layer.getAlias() == "Sea")
        {
            mySeaFound = true;
        }
        else if (layer.getAlias() == "Sky")
        {
            mySkyFound = true;
        }
    }
    
    bool allLayersFound()
    {
        return myMountainsFound && mySeaFound && mySkyFound;
    }
    
    bool onlyMountainsSkyFound()
    {
        return myMountainsFound && !mySeaFound && mySkyFound;
    }
    
private:
    bool myMountainsFound;
    bool mySeaFound;
    bool mySkyFound;
};

TEST(pushBack, Scene)
{
    Framework::Scene scene(800, 600);
	scene.pushBack(Framework::Layer("Mountains"));
	scene.pushBack(Framework::Layer("Sea"));
	scene.pushBack(Framework::Layer("Sky"));
    
    LayerMatcher matcher = std::for_each(scene.begin(), scene.end(), LayerMatcher());
    CHECK(matcher.allLayersFound());
}

TEST(remove, Scene)
{
    Framework::Scene scene(800, 600);
	scene.pushBack(Framework::Layer("Mountains"));
	scene.pushBack(Framework::Layer("Sea"));
	scene.pushBack(Framework::Layer("Sky"));
    
    scene.remove(Framework::Layer("Sea"));
    
    LayerMatcher matcher = std::for_each(scene.begin(), scene.end(), LayerMatcher());
    CHECK(matcher.onlyMountainsSkyFound());
}