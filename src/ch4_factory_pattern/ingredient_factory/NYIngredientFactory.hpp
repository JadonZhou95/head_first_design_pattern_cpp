#ifndef HPP_NYINGREDIENTFACTORY_
#define HPP_NYINGREDIENTFACTORY_

#include "IngredientFactory.hpp"

class NYIngredientFactory: public IngredientFactory
{
    public:
        Cheese* createCheese()
        {
            return new NYCheese();
        }

        Clam* createClam()
        {
            return new NYClam();
        }

        Douge* createDouge()
        {
            return new NYDouge();
        }

        Pepperoni* createPepperoni()
        {
            return new NYPepperoni();
        }

        Sauce* createSauce()
        {
            return new NYSauce();
        }

        Veggies* createVeggies()
        {
            return new NYVeggies();
        }
};


#endif