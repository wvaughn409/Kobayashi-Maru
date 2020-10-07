//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Builders/SimpleCity/SimpleCityModel.h"


void USimpleCityModel::Cleanup() {
}

void USimpleCityModel::Reset() {
    Cleanup();

    CityWidth = 0;
    CityLength = 0;
    Cells.Reset();
}
