#include "Element.h"

#include <stdexcept>

namespace Xml
{
	using namespace tinyxml2;

	TinyElement::TinyElement() :
		myDocument{ std::make_shared<XMLDocument>() },
		myElement{ myDocument->RootElement() }
	{}

	TinyElement::TinyElement(const std::string& name) :
		myDocument{ std::make_shared<XMLDocument>() },
		myElement{ myDocument->RootElement() }
	{
		myElement = myDocument->NewElement(name.c_str());
		myElement->SetName(name.c_str());
	}

	TinyElement::TinyElement(XMLElement* node) :
		myDocument{ nullptr },
		myElement{ node }
	{}

	void TinyElement::createFromXml(std::string& xmlStr)
	{
		if (myDocument->Parse(xmlStr.c_str()) != XML_SUCCESS)
		{
			throw std::runtime_error("Error Parsing XML stream");
		}

		myElement = myDocument->RootElement();
	}
    
    void TinyElement::setAttribute(const std::string& name,
                               const std::string& value)
    {
		myElement->SetAttribute(name.c_str(), value.c_str());
    }
    
    std::string TinyElement::getAttribute(const std::string& name) const
    {
        const auto* value{ myElement->Attribute(name.c_str()) };

		return std::string(value == nullptr ? "" : value);

    }
    
	HElement TinyElement::appendChild(const std::string& name) noexcept
    {
        auto* newElem{ new TinyElement( myElement->GetDocument()->NewElement(name.c_str())) };

		myElement->InsertEndChild(newElem->myElement);

		HElement hElem{ dynamic_cast<IElement *>(newElem) };
		return hElem;
    }
    
    AttributeMap TinyElement::getAttributes() const noexcept
    {
		AttributeMap attrs;

        const auto* attr = myElement->FirstAttribute();

		while (attr != nullptr)
		{
			attrs.emplace(attr->Name(), attr->Value());
			attr = attr->Next();
		}

		return attrs;
    }
    
	ElementCollection TinyElement::getChildElements() const noexcept
    {
		ElementCollection nodes;

		if (!myElement->NoChildren())
		{
			for (XMLElement* node = myElement->FirstChildElement(); node != nullptr; node = node->NextSiblingElement())
			{
                auto* elem{ new TinyElement(node) };
				nodes.emplace_back(dynamic_cast<IElement*>(elem));
			}
		}
		return nodes;
    }
    
    std::string TinyElement::getName() const noexcept
    {
		return std::string(myElement->Name());
    }
}
