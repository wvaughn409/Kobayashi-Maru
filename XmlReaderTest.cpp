#include "XmlInterfaces.h"
#include "XmlFactories.h"
#include "XmlReader.h"
#include "VectorGraphic.h"
#include "TestHarness.h"


const std::string SceneXml = R"(
<Scene width="800" height="600">
  <Layer alias="sky">
    <PlacedGraphic x="0" y="0">
      <VectorGraphic closed="true">
        <Point x="1" y="2" />
        <Point x="3" y="4" />
        <Point x="5" y="6" />
      </VectorGraphic>
    </PlacedGraphic>
    <PlacedGraphic x="700" y="0">
      <VectorGraphic closed="true">
        <Point x="7" y="8" />
        <Point x="9" y="10" />
        <Point x="11" y="12" />
      </VectorGraphic>
    </PlacedGraphic>
  </Layer>
  <Layer alias="mountains">
    <PlacedGraphic x="250" y="250">
      <VectorGraphic closed="false">
        <Point x="13" y="14" />
        <Point x="15" y="19" />
        <Point x="17" y="18" />
      </VectorGraphic>
    </PlacedGraphic>
  </Layer>
</Scene>)";

TEST(loadXml, XmlReader)
{
	std::stringstream xmlStream(SceneXml);

	Xml::HElement root = Xml::ReaderFactory::getReader().loadXml(xmlStream);

	CHECK_EQUAL("Scene", root->getName());
	CHECK_EQUAL("800", root->getAttribute("width"));
	CHECK_EQUAL("600", root->getAttribute("height"));
	CHECK(root->getAttribute("depth").empty());

	Xml::AttributeMap attributes = root->getAttributes();
	CHECK(!attributes.empty());
	CHECK_EQUAL(2, attributes.size());
	CHECK_EQUAL("800", attributes["width"])
	CHECK_EQUAL("600", attributes["height"])

	auto children = root->getChildElements();
	CHECK(!children.empty());
	CHECK_EQUAL(2, children.size());

	Xml::HElement layer0 = children[0];
	CHECK_EQUAL("Layer", layer0->getName());
	attributes = layer0->getAttributes();
	CHECK(!attributes.empty());
	CHECK_EQUAL(1, attributes.size());
	CHECK_EQUAL("sky", layer0->getAttribute("alias"));

	auto layerChildren = layer0->getChildElements();
	CHECK(!layerChildren.empty());
	CHECK_EQUAL(2, layerChildren.size());
	Xml::HElement placedGraphic = layerChildren[0];
	CHECK_EQUAL("PlacedGraphic", placedGraphic->getName());
	attributes = placedGraphic->getAttributes();
	CHECK(!attributes.empty());
	CHECK_EQUAL(2, attributes.size());
	CHECK_EQUAL("0", placedGraphic->getAttribute("x"));
	CHECK_EQUAL("0", placedGraphic->getAttribute("y"));
}