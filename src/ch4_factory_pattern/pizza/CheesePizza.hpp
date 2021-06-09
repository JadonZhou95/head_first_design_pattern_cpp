#ifndef HPP_CHEESEPIZZA_
#define HPP_CHEESEPIZZA_

#include "Pizza.hpp"
#include "ingredient_factory/ingredient_factory.h"

class CheesePizza: public Pizza
{
    public:
        CheesePizza(IngredientFactory* factory)
        {
            factory_ = factory;
        }

        void prepare()
        {
            douge_ = factory_->createDouge();
            sauce_ = factory_->createSauce();
            veggies_ = factory_->createVeggies();
            cheese_ = factory_->createCheese();

            std::cout << "Preparing "
                      << douge_->getDescription() << " "
                      << cheese_->getDescription() << " "
                      << sauce_->getDescription() << " "
                      << veggies_->getDescription() << std::endl;

        }
};

#endif