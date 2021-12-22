#include "Karen.hpp"

Karen::Karen(void)
{
	this->index[0] = "DEBUG";
	this->index[1] = "INFO";
	this->index[2] = "WARNING";
	this->index[3] = "ERROR";
	this->tmp[0] = &Karen::debug;
	this->tmp[1] = &Karen::info;
	this->tmp[2] = &Karen::warning;
	this->tmp[3] = &Karen::error;
}

void Karen::debug( void )
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info( void )
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error( void )
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}


void Karen::complain( std::string level )
{
	int i = 0;
	while( i < 5)
	{
		if(i == 4 || index[i] == level)
		{
			switch (i)
			{
				case 0:
					(this->*tmp[0])();
				case 1:
					(this->*tmp[1])();
				case 2:
					(this->*tmp[2])();
				case 3:
					(this->*tmp[3])();
					return;
				default:
					std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			}
		}
		i++;
	}
}