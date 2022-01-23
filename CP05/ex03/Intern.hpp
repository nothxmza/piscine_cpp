#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include <string>

class Intern{

        public:
            Intern(void){};
            ~Intern(){};
            Form* makeForm(std::string name,std::string target);
            
            class NotGoodName : public std::exception
            {
                public:
                    virtual const char * wath () const throw ()
                    {
                        return("Bad name");
                    }
            };



};

#endif