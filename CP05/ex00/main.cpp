#include "Bureaucrat.hpp"

int main()
{
    try
	{
        Bureaucrat b("lala", 50);
       std::cout << b<< std::endl;
        b.incrementer(25);
        std::cout << b.getGrade() << std::endl;
        b.decrementer(10);
        std::cout << b.getGrade() << std::endl;

    }
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

}