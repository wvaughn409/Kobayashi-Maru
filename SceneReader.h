#pragma once

namespace Xml { class IElement; }
namespace Framework { class Scene; }

namespace Framework
{
    class SceneReader
    {
    public:
        static Framework::Scene readScene(const Xml::IElement& rootElement);
    };
}
