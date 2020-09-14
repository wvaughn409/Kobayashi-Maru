#include "XmlReader.h"
#include <memory>
#include <sstream>

namespace Xml
{
    HElement TinyReader::loadXml(std::istream& in) const
    {
		const std::istreambuf_iterator<char> eos;
		std::string xmlStr(std::istreambuf_iterator<char>(in), eos);

        auto* elem{ new TinyElement() };
		HElement hElem{ dynamic_cast<IElement*>(elem) };

		elem->createFromXml(xmlStr);

		return hElem;
    }        
}