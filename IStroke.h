#pragma once

#include "ICanvas.h"
#include "IPen.h"

namespace BitmapGraphics
{
	class IStroke
	{
	public:
		virtual HPen createPen() const = 0;

	};
}



