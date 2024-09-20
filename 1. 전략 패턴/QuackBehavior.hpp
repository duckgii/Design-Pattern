#ifndef QUACKBEHAVIOR_HPP
# define QUACKBEHAVIOR_HPP

class QuackBehavior {
	public : 
		virtual void	quack();
};

class Quack : public QuackBehavior {
	public : 
		void	quack();
};

class MuteQuack : public QuackBehavior {
	public : 
		void	quack();
};

class Squack : public QuackBehavior {
	public : 
		void	quack();
};

#endif