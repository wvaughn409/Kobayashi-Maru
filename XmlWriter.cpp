#include "XmlWriter.h"
#include <algorithm>

namespace Xml
{
    
    void Writer::writeXml(const HElement& element, std::ostream& os)
    {
        return writeElement(element, os);
    }
    
    void Writer::writeElement(const HElement& element, std::ostream& os)
    {
        os << "<" << element->getName();
        writeAttributes(element, os);
        
		ElementCollection childElements{ element->getChildElements() };

        if (!childElements.empty())
        {
            os << ">" << std::endl;
        }
        else
        {
            os << "/>" << std::endl;
            return;
        }
        
		std::for_each(std::begin(childElements), std::end(childElements), [&os](const auto& elem) { writeElement(elem, os); });
        
        os << "</" << element->getName() << ">" << std::endl;
    }
    
    void Writer::writeAttributes(const HElement& element, std::ostream& os)
    {
        AttributeMap attributes = element->getAttributes();

		std::for_each(std::begin(attributes), std::end(attributes), [&os](const auto& attr) { os << " " << attr.first << "=\"" << attr.second << "\""; });
    }
    
}