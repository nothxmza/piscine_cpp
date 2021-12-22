#include "Karen.hpp"



int main(int argc , char **argv)
{
	Karen test;
	if(argc != 2)
	{
		std::cout << "error nbr arg" << std::endl;
		return(0);
	}
	test.complain(argv[1]);
}