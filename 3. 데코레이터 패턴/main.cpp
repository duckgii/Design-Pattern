#include "Beverage.hpp"
#include <sysdir.h>

void	check()
{
	system("leaks a.out");
}

int main()
{
	Beverage *beverage = new Espresso();
	Beverage *beverage2 = new HouseBlend();
	atexit(check);

	cout << beverage->getDescription() << " $" << beverage->cost() << endl;
	beverage2 = new Soy(beverage2);
	beverage2 = new Mocha(beverage2);
	beverage2 = new Whip(beverage2);
	cout << beverage2->getDescription() << " $" << beverage2->cost() <<endl;
}