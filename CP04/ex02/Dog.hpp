#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal{

    public:
        Dog(void);
        virtual ~Dog(void);
        Dog(Dog const & src);
		Dog & operator=(Dog const & rhs);
        virtual void makeSound(void) const;
    private:
        Brain* brain;

};

#endif