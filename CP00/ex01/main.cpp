#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void)
{
	int i(0);
	std::string command;
	PhoneBook phonebook;
	Contact contact;
	while(1)
	{
		std::cout << "entre une commande" << std::endl;
		std::cin >> command;
		if(command == "EXIT")
				exit(0);
		else if (command == "ADD")
		{
			if(i == 8)
				std::cout << "impossible dajouter plus de contact" << std::endl;
			else
			{
				contact = phonebook.ft_add();
				phonebook.setContact(contact,i);
				i++;
			}
		}
		else if (command == "SEARCH")
		{
			phonebook.ft_search(phonebook,i);
		}
	}
}
