#include "QuackBehavior.hpp"

#include <iostream>

using namespace std;

void	QuackBehavior::quack() {}

void	Quack::quack()
{
	cout<<"꽥"<<endl;
}

void	MuteQuack::quack()
{
	cout<<"<< 조용~ >>"<<endl;
}

void	Squack::quack()
{
	cout<<"삑"<<endl;
}