#ifndef INTERFACE_HPP
# define INTERFACE_HPP

#include <string>

class Observer
{
	protected:
		std::string	name;
	public:
		virtual void	update(float temp, float humidity, float pressure) {};
		std::string	getName() {return (name);};
};

class Subject
{
	public:
		virtual void	registerObserver(Observer *o) = 0;
		virtual void	removeObserver(Observer *o) = 0;
		virtual void	notifyObservers() = 0;
};

class DisplayElement
{
	public:
		virtual void	display() = 0;
};

#endif