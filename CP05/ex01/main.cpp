#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    try
	{
        Bureaucrat  b1("hamza", 100);
        Form        f1("A32", 120, 52);

       f1.beSigned(b1);
	   std::cout <<f1 << std::endl;
    }
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}