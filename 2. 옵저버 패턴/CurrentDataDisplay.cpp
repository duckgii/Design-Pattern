#include "CurrentDataDisplay.hpp"
#include <iostream>

CurrentDataDisplay::CurrentDataDisplay(WeatherData *weatherData)
{
	this->_weatherData = weatherData;
	weatherData->registerObserver(this);
}

void	CurrentDataDisplay::update(float temperature, float humidity, float pressure)
{
	this->_temperature = temperature;
	this->_humidity = humidity;
	display();
}

void	CurrentDataDisplay::display()
{
	std::cout<<"현재 상태 : 온도 " + std::to_string(_temperature) + "F, 습도 " + std::to_string(_humidity) + "%" <<std::endl;
}