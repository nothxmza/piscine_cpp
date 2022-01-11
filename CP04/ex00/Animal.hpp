#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {

        public:
            Animal(void);
            Animal(Animal const & src);
            ~Animal(void);
			Animal & operator=(Animal const & rhs);
            std::string getType(void) const;
            virtual  void makeSound(void) const;//cherche le type reel 

        protected:
                std::string type;
};

#endif