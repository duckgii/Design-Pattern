#include "FlyBehavior.hpp"

#include <iostream>

using namespace std;

void	FlyBehavior::fly() {}

void	FlyWithWings::fly()
{
	cout<<"날고 있어요!!"<<endl;
}

void	FlynoWay::fly()
{
	cout<<"저는 못 날아요"<<endl;
}

void	FlyRocketPowered::fly()
{
	cout<<"로켓 추진으로 날아갑니다."<<endl;
}