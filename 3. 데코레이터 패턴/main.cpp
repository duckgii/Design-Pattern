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
	Beverage *temp1;
	Beverage *temp2;
	Beverage *temp3;
	atexit(check);

	cout << beverage->getDescription() << " $" << beverage->cost() << endl;
	temp1 = beverage2;
	beverage2 = new Soy(beverage2);
	temp2 = beverage2;
	beverage2 = new Mocha(beverage2);
	temp3 = beverage2;
	beverage2 = new Whip(beverage2);
	cout << beverage2->getDescription() << " $" << beverage2->cost() <<endl;
	
	delete beverage2;
	delete temp1;
	delete temp2;
	delete temp3;
	delete beverage;
}