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

Fixed::Fixed(const int nbr)
{	
	std::cout <<"Int constructor called" << std::endl;
	this->fixe = nbr << this->bits;
}

Fixed::Fixed(const float nbr)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixe = roundf(nbr * (1 << this->bits));
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat(void) const
{
	return ((double)this->fixe / (double)(1 << this->bits));
}

int Fixed::toInt(void) const
{
	return (this->fixe >> this->bits);
}

void Fixed::setRawBits(int const raw)
{
    this->fixe = raw;
}

int Fixed::getRawBits(void) const
{
    return this->fixe;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    this->fixe = rhs.getRawBits();
    return *this;
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}