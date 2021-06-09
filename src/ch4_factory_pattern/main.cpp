#include "pizza_store/ChicagoPizzaStore.hpp"
#include "pizza_store/NYPizzaStore.hpp"
#include "ingredient_factory/ChicagoIngredientFactory.hpp"

int main()
{
    PizzaStore* chicagoPizzaSotre = new ChicagoPizzaStore();
    Pizza* pizza1 = chicagoPizzaSotre->orderPizza("cheese");

    std::cout << "----------" << std::endl;

    PizzaStore* nyPizzaStore = new NYPizzaStore();
    Pizza* pizza2 = nyPizzaStore->orderPizza("cheese");


    return 0;
}