#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main(void)
{
    const Cat*	a = new Cat();
	const Cat	b(*a);

	b.makeSound();
	delete a;
}