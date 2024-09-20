#ifndef FLYBEHAVIOR_HPP
# define FLYBEHAVIOR_HPP

class FlyBehavior {
    public : 
        virtual void    fly();
};

class FlyWithWings : public FlyBehavior {
    public : 
        void    fly();
};

class FlynoWay : public FlyBehavior {
    public : 
        void    fly();
};

class FlyRocketPowered : public FlyBehavior{
	public :
		void	fly();
};

#endif