#pragma once

#include "IProjector.h"
#include "CodecLibrary.h"

namespace BitmapGraphics
{
	class WindowsBitmapFileProjector :
		public IProjector
	{
	public:
		WindowsBitmapFileProjector(std::string filename, const std::shared_ptr<CodecLibrary>& codecLibrary);

	};
}


