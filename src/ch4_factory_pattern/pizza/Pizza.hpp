#ifndef HPP_PIZZA_
#define HPP_PIZZA_

#include <iostream>
#include <string>
#include "ingredient_factory/ingredient_factory.h"

class Pizza
{
    protected:
        std::string name;
        
        Cheese* cheese_;
        Clam* clam_;
        Douge* douge_;
        Pepperoni* pepperoni_;
        Sauce* sauce_;
        Veggies* veggies_;
        
        IngredientFactory* factory_;

    public:
        virtual void prepare() = 0;

        void bake()
        {
            std::cout << "Bake the pizza for 30 mins." << std::endl;
        }

        void cut()
        {
            std::cout << "Cut the pizza into 8 slices." << std::endl;
        }

        void box()
        {
            std::cout << "Put the pizza into a package." << std::endl;
        }
};

#endif