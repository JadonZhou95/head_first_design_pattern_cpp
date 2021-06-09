#ifndef HPP_ChicagoINGREDIENTFACTORY_
#define HPP_ChicagoINGREDIENTFACTORY_

#include "IngredientFactory.hpp"

class ChicagoIngredientFactory: public IngredientFactory
{
    public:
        Cheese* createCheese()
        {
            return new ChicagoCheese();
        }

        Clam* createClam()
        {
            return new ChicagoClam();
        }

        Douge* createDouge()
        {
            return new ChicagoDouge();
        }

        Pepperoni* createPepperoni()
        {
            return new ChicagoPepperoni();
        }

        Sauce* createSauce()
        {
            return new ChicagoSauce();
        }

        Veggies* createVeggies()
        {
            return new ChicagoVeggies();
        }
};


#endif