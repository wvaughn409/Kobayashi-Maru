#include "PlacedGraphic.h"
#include "VectorGraphic.h"
#include "TestHarness.h"

TEST(ctor, PlacedGraphic)
{
	VG::HVectorGraphic vg(new VG::VectorGraphic);
	Framework::PlacedGraphic pg(VG::Point(44, 55), vg);

	constexpr VG::Point expected(44, 55);
	CHECK_EQUAL(expected, pg.getPlacementPoint());
	CHECK_EQUAL(vg.get(), &pg.getGraphic());
}

TEST(setPlacementPoint, PlacedGraphic)
{
	Framework::PlacedGraphic graphic;
	graphic.setPlacementPoint(VG::Point(44, 55));

	constexpr VG::Point expected(44, 55);
	CHECK_EQUAL(expected, graphic.getPlacementPoint());
}

TEST(setGraphic, PlacedGraphic)
{
	Framework::PlacedGraphic pg;
	VG::HVectorGraphic vg(new VG::VectorGraphic);
	pg.setGraphic(vg);

	CHECK_EQUAL(vg.get(), &pg.getGraphic());
}
