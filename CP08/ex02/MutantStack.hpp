#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

#include <iostream>
#include <stack>
#include <list>

template<typename T>
class MutantStack : public std::stack<T> 
{
    public:
        MutantStack() {}
        MutantStack(const MutantStack &src){}
        virtual ~MutantStack() {}
        MutantStack &operator=(const MutantStack &src) 
        {
            std::stack<T>::operator=(src);
        }
    
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin()
        {
            return std::stack<T>::c.begin();
        }
    
        iterator end()
        {
            return std::stack<T>::c.end();
        }
};

#endif