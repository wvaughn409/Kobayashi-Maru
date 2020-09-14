#pragma once

#include "ICanvas.h"
#include <memory>

namespace BitmapGraphics
{
	class IPen
	{
	public:

		virtual void drawPoint(const HCanvas& canvas, const VG::Point& point) = 0;

	};

	using HPen = std::unique_ptr<IPen>;
}


