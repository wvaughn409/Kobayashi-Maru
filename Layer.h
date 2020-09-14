#pragma once

//TODO: should not have to include this next header
#include "ICanvas.h"

#include "PlacedGraphic.h"
#include <list>
#include <string>

namespace Framework
{
    class Layer
    {
    private:
        using PlacedGraphicCollection = std::list<PlacedGraphic>;
        
    public:
        Layer(const std::string& alias);
		Layer(const Layer& other) = default;
		Layer(Layer&& other) = default;
        ~Layer() = default;

		Layer& operator=(const Layer&) = default;
		Layer& operator=(Layer&&) = default;
       
		void draw(BitmapGraphics::HCanvas& canvas) const;


        using PlacedGraphicIterator = PlacedGraphicCollection::const_iterator;
        
        template<class C> void pushBack(C&& placedGraphic)		
		{
			myGraphics.push_back(std::forward<C>(placedGraphic));
		}

        void remove(const PlacedGraphic& placedGraphic);
        PlacedGraphicIterator begin() const;
        PlacedGraphicIterator end() const;
        
        std::string getAlias() const;
        
        bool operator==(const Layer& rhs) const;
        bool operator!=(const Layer& rhs) const;
        
    private:
        PlacedGraphicCollection myGraphics;
        std::string myAlias;
    };
}
