#include <iostream>
#include <fstream>

int main(int argc,char **argv)
{
	if(argc != 4)
	{
		std::cout << "il faut 3 arg" << std::endl;
		exit(0);
	}
	std::ifstream file(argv[1]);
	if(!(file.is_open()))
		std::cout << "fichier inexistent";
	else
	{
		std::ofstream file2;
		std::string s1;
		std::string s2= argv[1];
		s2 += ".replace";
		file2.open(s2);
		if(!(file2.is_open()))
			std::cout << "fichier inexistent";
		while(getline(file,s1))
		{
			std::size_t count1 = s1.find(argv[2]);
			while(count1 != std::string::npos)
			{
				s1.erase(count1,strlen(argv[2]));
				s1.insert(count1,argv[3]);
				count1 = s1.find(argv[2]);
			}
			file2 << s1 << '\n';
		}
		file2.close();
	}
	file.close();
	return(0);
}
