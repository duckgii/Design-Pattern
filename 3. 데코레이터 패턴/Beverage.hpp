#ifndef BEVERAGE_HPP
# define BEVERAGE_HPP

# include <string>
# include <iostream>

using namespace std;

class Beverage
{
	public:
		string	description;
		virtual string	getDescription();
		virtual	double	cost();
		//Beverage& operator=(Beverage &in);
};

class CondimentDecorator : public Beverage
{
	public:
		Beverage *beverage;
		virtual	double	cost();
};

class Espresso : public Beverage
{
	public:
		Espresso();
		double	cost();
};

class HouseBlend : public Beverage
{
	public:
		HouseBlend();
		double	cost();
};

class Mocha : public CondimentDecorator
{
	public:
		Mocha(Beverage *_beverage);
		string	getDescription();
		double	cost();
};

class Soy : public CondimentDecorator
{
	public:
		Soy(Beverage* _beverage);
		string	getDescription();
		double	cost();
};

class Whip : public CondimentDecorator
{
	public:
		Whip(Beverage *_beverage);
		string	getDescription();
		double	cost();
};

#endif