#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main(void)
{
    /*const Animal* brain[4];
    for(int i = 0; i < 2;i++)
        brain[i] = new Cat();
    for(int i = 2; i < 4;i++)
		brain[i] = new Dog();
	for(int i = 0; i < 4;i++)
		delete brain[i];*/

    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;

}