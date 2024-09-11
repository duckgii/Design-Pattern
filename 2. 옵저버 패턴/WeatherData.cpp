#include "WeatherData.hpp"
#include <iostream>
WeatherData::WeatherData()
{}

void	WeatherData::registerObserver(Observer* o)
{
	observers[o->getName()] = o;
}

void	WeatherData::removeObserver(Observer* o)
{
	observers.erase(o->getName());
}

void	WeatherData::notifyObservers()
{
	for (auto iter = observers.begin(); iter != observers.end(); iter++)
	{
		(iter->second)->update(temperature, humidity, pressure);
	}
}

void	WeatherData::measurementChanged()
{
	notifyObservers();
}

void	WeatherData::setMeasurements(float _temperature, float _humidity, float _pressure)
{
	this->temperature = _temperature;
	this->humidity = _humidity;
	this->pressure = _pressure;
	measurementChanged();
}


