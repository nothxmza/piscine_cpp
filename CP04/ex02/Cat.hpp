#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"

class Cat : public AAnimal{

    public:
        Cat(void);
        ~Cat(void);
        void makeSound(void) const;

};

#endif