#ifndef HPP_PIZZASTORE_
#define HPP_PIZZASTORE_

#include "pizza/Pizza.hpp"
#include <string>
#include "ingredient_factory/ingredient_factory.h"

class PizzaStore
{
    protected:
        IngredientFactory* factory_;

    public:
        Pizza* orderPizza(const std::string &name)
        {
            Pizza* pizza = this->createPizza(name);

            pizza->prepare();
            pizza->bake();
            pizza->cut();
            pizza->box();
        }

        virtual Pizza* createPizza(const std::string &name) = 0;
};


#endif