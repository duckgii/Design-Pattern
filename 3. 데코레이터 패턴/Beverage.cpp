#include "Beverage.hpp"

//Beverage::Beverage()
//{
//	description = "none";
//}

//Beverage& Beverage::operator=(Beverage &in)
//{
//	this->description = in.description;
//	return (*this);
//}

string	Beverage::getDescription() {return (description);}

double	Beverage::cost() {return (0);}

double CondimentDecorator::cost() {return (0);}

Espresso::Espresso()
{
	description = "Espresso";
}

double Espresso::cost()
{
	return (1.99);
}

HouseBlend::HouseBlend()
{
	description = "HouseBlend";
}
double HouseBlend::cost()
{
	return(0.89);
}

Mocha::Mocha(Beverage *_beverage)
{
	this->beverage = _beverage;
}

string Mocha::getDescription()
{
	return beverage->getDescription() + ", 모카";
}

double Mocha::cost()
{
	return beverage->cost() + 0.20;
}
Soy::Soy(Beverage* _beverage)
{
	this->beverage = _beverage;
}

string Soy::getDescription()
{
	return (beverage->getDescription() + ", 두유");
}

double Soy::cost()
{
	return beverage->cost() + 0.30;
}
Whip::Whip(Beverage *_beverage)
{
	this->beverage = _beverage;
}

string Whip::getDescription()
{
	return beverage->getDescription() + ", 휘핑크림";
}

double Whip::cost()
{
	return beverage->cost() + 0.50;
}