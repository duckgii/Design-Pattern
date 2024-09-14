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
	beverage2 = new Soy(beverage2); // new 연산을 사용하지 않고 =연산자 오버로딩으로 대입하려고하면 생성자로 반환되는 객체는 임시객체라 참조가 되지 않아서 반환형을 참조형으로 선언한다면 에러가 발생한다.
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
	//메모리 해제를 위해 해제해야하는 메모리를 하나하나 지정했지만 이 방법보다는 소멸자를 이용해서 부모클래스로 타고타고 올라가면서 메모리를 해제하는 방법이 더욱 깔끔해보임
}