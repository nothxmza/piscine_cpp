#include <iostream>
#include <stdlib.h>
#include <sstream>

std::string::size_type sz;

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
    if(n > INT_MAX || n < INT_MIN)
    {
        std::cout << "impossible" << std::endl;
        return;
    }
    int nbr = static_cast<int>(n);
    std::cout << nbr << std::endl;
}

void convert_double(double n)
{
    std::cout<< n << std::endl;
}

void convert_float(double n)
{
    float nbr = static_cast<float>(n);
    if (n != n)
	{
		std::cout << "nanf" << std::endl;
		return ;
	}
    std::cout << nbr << std::endl;
}
int main(int argc,char **argv)
{
    double i;
    if(argc == 2)
    {

        std::string s1 = argv[1];
        
			try 
			{
				 i = std::atof(s1.c_str());
			}
			catch (std::exception & e)
			{
				std::cerr << e.what() << std::endl;
				return (0);
			}
		
        convert_char(i);
        convert_int(i);
        convert_double(i);
        convert_float(i);
    }
    else
        std::cout <<"error: number of arguments invalid." <<std::endl;
   
}

        