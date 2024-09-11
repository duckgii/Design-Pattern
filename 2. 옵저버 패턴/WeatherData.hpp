#ifndef WEATHER_HPP
# define WEATHER_HPP

# include "interface.hpp"
# include <map>

class WeatherData : public Subject
{
	protected:
		std::map<std::string, Observer*>	observers;
		float	temperature;
		float	humidity;
		float	pressure;

	public:
		WeatherData();
		void	registerObserver(Observer* o);
		void	removeObserver(Observer* o);
		void	notifyObservers();
		void	measurementChanged();
		void	setMeasurements(float temperature, float humidity, float pressure);
};

#endif