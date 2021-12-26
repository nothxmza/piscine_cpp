#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void)
{
    this->fixe = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
    std::cout << "Copy constructor called" <<std::endl;
    *this = src;
    return;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

void Fixed::setRawBits(int const raw)
{
    this->fixe = raw;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixe;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    this->fixe = getRawBits();
    return *this;
}