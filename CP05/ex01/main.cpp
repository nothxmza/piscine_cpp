#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    try
	{
        Bureaucrat  b1("hamza", 126);
        Form        f1("A32", 120, 52);

       f1.beSigned(b1);
    }
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}