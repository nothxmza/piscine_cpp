#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal{

    public:
        Cat(void);
        virtual ~Cat(void);
        Cat(Cat const & src);
		Cat & operator=(Cat const & rhs);
		std::string	getType() const;

        virtual void makeSound(void) const;
    private:
        Brain* brain;

};

#endif