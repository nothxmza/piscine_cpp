#include <iostream>
#include <stdlib.h>

void convert_char(double n)
{
    if (n <= 32 || n >= 127)
	{
		std::cout << "Non displayable" << std::endl;
		return ;
	}
    char c = static_cast<char>(n);
    if(c == 0)
    {
        std::cout <<"impossible"<<std::endl;
        return;
    }
    std::cout << "'" << c << "'" << std::endl;
}

void convert_int(double n)
{
    if(n > INT_MAX || n < INT_MIN || n!=n)
    {
        std::cout << "impossible" << std::endl;
        return;
    }
    int nbr = static_cast<int>(n);
    std::cout << nbr << std::endl;
}

void convert_double(double n)
{
    if ((n - static_cast<int>(n)==0))
		std::cout << n << ".0" <<std::endl;
	else
		std::cout << n << std::endl;
}

void convert_float(double n)
{
    float nbr = static_cast<float>(n);
    if ((nbr - static_cast<int>(nbr) == 0))
		std::cout << nbr << ".0f" <<std::endl;
	else
		std::cout << nbr << "f" << std::endl;
}

int main(int argc,char **argv)
{
    double i;
    if(argc == 2)
    {
        std::string s1 = argv[1];
        if (argv[1][0] && !(argv[1][1]) && (argv[1][0] < '0' || argv[1][0] > '9'))
			i = static_cast<double>(argv[1][0]);
        else{
            try 
			{
				 i = std::atof(s1.c_str());
			}
			catch (std::exception & e)
			{
				std::cerr << e.what() << std::endl;
				return (0);
			}
        }	
		std::cout << "char: ";
        convert_char(i);
        std::cout << "int: ";
        convert_int(i);
        std::cout << "float: ";
        convert_float(i);
        std::cout << "double: ";
        convert_double(i);
    }
    else
        std::cout <<"error: number of arguments invalid." <<std::endl;
}