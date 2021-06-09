#ifndef HPP_INGREDIENTFACTORY_
#define HPP_INGREDIENTFACTORY_

#include "ingredient/ingredient.h"

class IngredientFactory
{
    public:
        virtual Cheese* createCheese() = 0;
        virtual Clam* createClam() = 0;
        virtual Douge* createDouge() = 0;
        virtual Pepperoni* createPepperoni() = 0;
        virtual Sauce* createSauce() = 0;
        virtual Veggies* createVeggies() = 0;
};


#endif