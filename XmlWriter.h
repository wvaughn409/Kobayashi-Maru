#pragma once

#include "Element.h"
#include <ostream>

namespace Xml
{
    
    class Writer
    {
    public:
        static void writeXml(const HElement& element, std::ostream& os);
        
    private:
        static void writeElement(const HElement& element, std::ostream& os);
        static void writeAttributes(const HElement& element, std::ostream& os);
    };
    
}