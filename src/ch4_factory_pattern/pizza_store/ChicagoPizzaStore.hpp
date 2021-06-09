#ifndef HPP_CHICAGOPIZZASTORE_
#define HPP_CHICAGOPIZZASTORE_

#include "PizzaStore.hpp"
#include "pizza/ChicagoCheesePizza.hpp"
#include "pizza/NYCheesePizza.hpp"
#include "pizza/CheesePizza.hpp"
#include "pizza/ClamPizza.hpp"
#include "ingredient_factory/ingredient_factory.h"

class ChicagoPizzaStore: public PizzaStore
{
    public:
        ChicagoPizzaStore()
        {
            factory_ = new ChicagoIngredientFactory();
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