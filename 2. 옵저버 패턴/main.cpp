#include "CurrentDataDisplay.hpp"
#include "interface.hpp"
#include "WeatherData.hpp"
#include <iostream>

int main()
{
	WeatherData *weather = new WeatherData();
	CurrentDataDisplay current(weather);

	weather->setMeasurements(80, 65, 30.4f);
}