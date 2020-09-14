#pragma once

#include "ICanvas.h"

namespace BitmapGraphics
{
	class IProjector
	{
	public:

		virtual void projectCanvas(const HCanvas& canvas) = 0;

	};
}



