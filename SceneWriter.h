#pragma once
#include "XmlInterfaces.h"

namespace Framework { class Scene; }

namespace Framework
{
    class SceneWriter
    {
    public:
        static Xml::HElement writeScene(const Scene& scene);
    };
}
