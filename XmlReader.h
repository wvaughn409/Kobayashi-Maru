#pragma once

#include "Element.h"
#include <iostream>

namespace Xml
{
	class ReaderFactory;

    class TinyReader : public IXmlReader
    {
		friend class ReaderFactory;
    public:
		~TinyReader() = default;

        HElement loadXml(std::istream& in) const override;

		TinyReader(const TinyReader& other) = delete;
		TinyReader(TinyReader&& other) = delete;
		TinyReader& operator=(const TinyReader& other) = delete;
		TinyReader& operator=(TinyReader&& other) = delete;

	protected:
		TinyReader() = default;		
    };
    
}
