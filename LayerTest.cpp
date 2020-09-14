#include "Layer.h"
#include "VectorGraphic.h"
#include "TestHarness.h"

TEST(pushBack, Layer)
{
	Framework::Layer layer{ "Mountains" };

	layer.pushBack(Framework::PlacedGraphic(VG::Point(11, 11), VG::HVectorGraphic(new VG::VectorGraphic)));
	layer.pushBack(Framework::PlacedGraphic(VG::Point(22, 22), VG::HVectorGraphic(new VG::VectorGraphic)));
	layer.pushBack(Framework::PlacedGraphic(VG::Point(33, 33), VG::HVectorGraphic(new VG::VectorGraphic)));

	int numberOfGraphics{ 0 };
	for (auto pos = layer.begin(); pos != layer.end(); ++pos)
	{
		++numberOfGraphics;
	}

	constexpr int expectedSize{ 3 };
	CHECK_EQUAL(expectedSize, numberOfGraphics);
}

TEST(getAlias, Layer)
{
	Framework::Layer layer{ "Sea" };

	const std::string expected{ "Sea" };
	CHECK_EQUAL(expected, layer.getAlias());
}

TEST(remove, Layer)
{
	Framework::Layer layer{ "Air" };

	layer.pushBack(Framework::PlacedGraphic(VG::Point(11, 11), VG::HVectorGraphic(new VG::VectorGraphic)));
	layer.pushBack(Framework::PlacedGraphic(VG::Point(22, 22), VG::HVectorGraphic(new VG::VectorGraphic)));
	layer.pushBack(Framework::PlacedGraphic(VG::Point(33, 33), VG::HVectorGraphic(new VG::VectorGraphic)));

	layer.remove(Framework::PlacedGraphic(VG::Point(33, 33), VG::HVectorGraphic(new VG::VectorGraphic)));

	int numberOfGraphics{ 0 };
	for (auto pos = layer.begin(); pos != layer.end(); ++pos)
	{
		++numberOfGraphics;
	}

	constexpr int expectedSize{ 2 };
	CHECK_EQUAL(expectedSize, numberOfGraphics);
}
