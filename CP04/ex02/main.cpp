#include "AAnimal.hpp"
#include "Cat.hpp"

int main(void)
{
    AAnimal* a = new Cat();
    //AAnimal* b = new AAnimal();

    //b->makeSound();
    a->makeSound();
}