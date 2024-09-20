#include "Duck.hpp"

#include <iostream>

using namespace std;

Duck::Duck() {};

void	Duck::display() {}

void	Duck::performFly()
{
	flyBehavior->fly();
}

void	Duck::performQuack()
{
	quackBehavior->quack();
}

void	Duck::swim()
{
	cout<<"모든 오리는 물에 뜹니다. 가짜 오리도 뜨죠"<<endl;
}

void	Duck::setFlyBehavior(FlyBehavior *fb)
{
	this->flyBehavior = fb;
}

void	Duck::setQuackBehavior(QuackBehavior *qb)
{
	this->quackBehavior = qb;
}

MallardDuck::MallardDuck()
{
	flyBehavior = new FlyWithWings();
	quackBehavior = new Quack();
}

void	MallardDuck::display()
{
	cout<<"저는 물오리입니다."<<endl;
}