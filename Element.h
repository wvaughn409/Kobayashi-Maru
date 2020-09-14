#pragma once

#include "XmlInterfaces.h"
#include "tinyxml2.h"

namespace Xml
{
    class TinyElement : public IElement
    {
    public:
		TinyElement();
        TinyElement(const std::string& name);

		TinyElement(const TinyElement& other) = delete;
		TinyElement(TinyElement&& other) = delete;
        virtual ~TinyElement() = default;

		TinyElement& operator=(const TinyElement& other) = delete;
		TinyElement& operator=(TinyElement&& other) = delete;

		void createFromXml(std::string& xmlStr) override;

        std::string getName() const noexcept override;
        
        void setAttribute(const std::string& name, const std::string& value) override;        
        std::string getAttribute(const std::string& name) const override;
		AttributeMap getAttributes() const noexcept override;

		ElementCollection getChildElements() const noexcept override;
        
        HElement appendChild(const std::string& name) noexcept override;
        
    private:
		TinyElement(tinyxml2::XMLElement* node);

		std::shared_ptr<tinyxml2::XMLDocument> myDocument;
		tinyxml2::XMLElement* myElement;
    };
}
