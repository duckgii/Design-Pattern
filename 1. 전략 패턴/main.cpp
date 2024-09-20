#include "Duck.hpp"
#include "FlyBehavior.hpp"
#include "QuackBehavior.hpp"

int main()
{
	Duck	*mallard = new MallardDuck();
	mallard->performQuack();
	mallard->performFly();

	mallard->setFlyBehavior(new FlyRocketPowered()) ;
	mallard->performFly();
}