#include "Duck.h"

int main()
{
    Duck *p_ducks[3] = {new MalardDuck(), new RedheadDuck(), new RubberDuck()};

    std::cout << "**********" << std::endl; 
    p_ducks[0]->display();
    p_ducks[0]->performSwimming();
    p_ducks[0]->performFlying();
    p_ducks[0]->performQuacking();

    std::cout << "**********" << std::endl;
    p_ducks[1]->display();
    p_ducks[1]->performSwimming();
    p_ducks[1]->performFlying();
    p_ducks[1]->performQuacking();

    std::cout << "**********" << std::endl;
    p_ducks[2]->display();
    p_ducks[2]->performSwimming();
    p_ducks[2]->performFlying();
    p_ducks[2]->performQuacking();

    std::cout << "**********" << std::endl;
    p_ducks[1]->setQuackBehavior(new Quack());
    p_ducks[1]->display();
    p_ducks[1]->performSwimming();
    p_ducks[1]->performFlying();
    p_ducks[1]->performQuacking();

    return 0;
}