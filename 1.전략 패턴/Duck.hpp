#ifndef DUCK_HPP
# define DUCK_HPP

# include "FlyBehavior.hpp"
# include "QuackBehavior.hpp"

class Duck {
    public : 
        FlyBehavior *flyBehavior;
        QuackBehavior   *quackBehavior;

        Duck();
        virtual void    display();
        void    performFly();
        void    performQuack();
        void    swim();
		void	setFlyBehavior(FlyBehavior *fb);
		void	setQuackBehavior(QuackBehavior *qb);
};

class MallardDuck : public Duck{
	public :
		MallardDuck();
		void	display();
};

#endif