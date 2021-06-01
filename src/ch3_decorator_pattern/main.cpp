#include "condiment_decarator/condiment_decorator.h"
#include "concrete_component/concrete_component.h"


int main()
{
    Beverage* concrete = new Espresso();
    Beverage* decorator1 = new Milk(concrete);
    Beverage* decorator2 = new Whip(decorator1);
    Beverage* decorator3 = new Soy(decorator2);
    Beverage* decorator4 = new Mocha(decorator3);
    std::cout << decorator4->getDescription() <<  ": " << decorator4->cost() << std::endl;

    // Delete Manually?
    delete concrete;
    delete decorator1;
    delete decorator2;
    delete decorator3;
    delete decorator4;

    return 0;
}