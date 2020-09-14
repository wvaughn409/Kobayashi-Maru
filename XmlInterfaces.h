#pragma once
#include <memory>
#include <string>
#include <vector>
#include <map>

namespace Xml
{
	class IElement;
	using HElement = std::shared_ptr<IElement>;
	using ElementCollection = std::vector<HElement>;
	using AttributeMap = std::map<std::string, std::string>;

	class IElement
	{
	public:

		IElement() = default;
		IElement(const IElement&) = default;
		IElement(IElement&&) = default;
		IElement& operator=(const IElement&) = default;
		IElement& operator=(IElement&&) = default;

		virtual ~IElement() = default;

		virtual void createFromXml(std::string& xmlStr) = 0;
		
		virtual std::string getName() const noexcept = 0;

		virtual void setAttribute(const std::string& name, const std::string& value) = 0;
		virtual std::string getAttribute(const std::string& name) const = 0;
		virtual AttributeMap getAttributes() const noexcept = 0;

		virtual ElementCollection getChildElements() const noexcept = 0;

		virtual HElement appendChild(const std::string& name) noexcept = 0;
	};

	class IXmlReader
	{
	public:

		IXmlReader() = default;
		IXmlReader(const IXmlReader&) = delete;
		IXmlReader(IXmlReader&&) = delete;
		virtual ~IXmlReader() = default;

		IXmlReader& operator=(const IXmlReader&) = delete;
		IXmlReader& operator=(IXmlReader&&) = delete;

		virtual HElement loadXml(std::istream& in) const = 0;
	};
}
