#pragma once
#include "Layer.h"
//TODO: should not have to include this next header
#include "ICanvas.h"

#include <list>

namespace Framework
{
    class Scene
    {
    private:
        using LayerCollection = std::list<Layer>;
        
    public:
        Scene(int width, int height);

        Scene() = default;
		Scene(const Scene& other) = default;
		Scene(Scene&& other) = default;
        ~Scene() = default;

		Scene& operator=(const Scene&) = default;
		Scene& operator=(Scene&&) = default;
        
		void draw(BitmapGraphics::HCanvas& canvas) const;

        using LayerIterator = LayerCollection::const_iterator;

		template <class L> void pushBack(L&& layer)
		{
			myLayers.push_back(std::forward<L>(layer));
		}

        void remove(const Layer& layer);
        LayerIterator begin() const;
        LayerIterator end() const;
        
        int getWidth() const;
        int getHeight() const;
        
    private:
        LayerCollection myLayers;
        int myWidth = 0;
        int myHeight = 0;
    };
}
