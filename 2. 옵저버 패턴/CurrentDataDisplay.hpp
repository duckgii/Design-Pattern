#ifndef CURRENTDATADISPLAY_HPP
# define CURRENTDATADISPLAY_HPP

# include "WeatherData.hpp"
# include "interface.hpp"

class CurrentDataDisplay : public Observer, public DisplayElement
{
	private:
		float	_temperature;
		float	_humidity;
		WeatherData *_weatherData;

	public:
		CurrentDataDisplay(WeatherData *weatherData);
		void	update(float temperature, float humidity, float pressure);
		void	display();		
};

#endif