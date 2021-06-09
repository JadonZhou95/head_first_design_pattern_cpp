#ifndef HPP_NYPIZZASTORE_
#define HPP_NYPIZZASTORE_

#include "PizzaStore.hpp"
#include "ingredient_factory/ingredient_factory.h"
#include "pizza/CheesePizza.hpp"

class NYPizzaStore: public PizzaStore
{
    public:
        NYPizzaStore()
        {
            factory_ = new NYIngredientFactory();
        }

        Pizza* createPizza(const std::string &name)
        {
            if (!name.compare("cheese"))
                return new CheesePizza(factory_);
            if (!name.compare("clam"))
                return new ClamPizza(factory_);
        }
};

#endif