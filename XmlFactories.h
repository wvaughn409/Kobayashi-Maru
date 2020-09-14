#pragma once

#include "XmlInterfaces.h"
#include "XmlReader.h"

namespace Xml
{
	class ElementFactory
	{
	public:
		static HElement createElement(const std::string& name);
	};

	class ReaderFactory
	{
	public:
		static const IXmlReader& getReader();

	private:
		static std::shared_ptr<IXmlReader> theReader;
	};

	
}