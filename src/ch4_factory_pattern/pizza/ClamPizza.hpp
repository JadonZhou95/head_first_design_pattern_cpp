#ifndef HPP_CLAMPIZZA_
#define HPP_CLAMPIZZA_

#include "Pizza.hpp"
#include "ingredient_factory/ingredient_factory.h"

class ClamPizza: public Pizza
{
    public:
        ClamPizza(IngredientFactory* factory)
        {
            factory_ = factory;
        }

        void prepare()
        {
            douge_ = factory_->createDouge();
            sauce_ = factory_->createSauce();
            veggies_ = factory_->createVeggies();
            clam_ = factory_->createClam();

            std::cout << "Preparing "
                      << douge_->getDescription() << " "
                      << clam_->getDescription() << " "
                      << sauce_->getDescription() << " "
                      << veggies_->getDescription() << std::endl;

        }
};

#endif