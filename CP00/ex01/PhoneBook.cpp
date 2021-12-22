#include "PhoneBook.hpp"

void PhoneBook::setContact(Contact contacts,int i)
{
	this->contacts[i] = contacts;

}

Contact PhoneBook::getContact(int i)
{
	return contacts[i];
}

std::string ft_cut(std::string str)
{
	int i = 0;
	i = str.size();
	if(i < 10)
		return(str);
	else
		return str.substr(0,9) + ".";
}

Contact	PhoneBook::ft_add()
{
	std::string info;
	Contact contact;

	std::cout << "FirstName : " << std::endl;
	std::cin >> info;
	contact.setFirstName(info);


	std::cout << "LastName : " << std::endl;
	std::cin >> info;
	contact.setLastName(info);


	std::cout << "Nickname : " << std::endl;
	std::cin >> info;
	contact.setNickname(info);


	std::cout << "PhoneNumber : " << std::endl;
	std::cin >> info;
	contact.setPhoneNumber(info);


	std::cout << "Darkest secret : " << std::endl;
	std::cin >> info;
	contact.setDarkestSecret(info);
	return contact;
}

void PhoneBook::ft_search(PhoneBook phonebook,int i)
{
	int x(0);
	int t(0);
	std::cout << " | " << std::setw(10) << "index" << " | " << std::setw(10) << "first name" << " | " << "last name" << "  | " << std::setw(10) << "nickname" << " | " << std::endl;
	while(x < i)
	{
		std::cout << " | " << std::setw(10) << x << " | " << std::setw(10) << ft_cut(phonebook.getContact(x).getFirstName()) << " | " << std::setw(10) << ft_cut(phonebook.getContact(x).getLastName()) << " | " << std::setw(10) << ft_cut(phonebook.getContact(x).getNickname()) << " | " << std::endl;
		x++;
	}
	std::cout << "preciser un numero de contact" << std::endl;
	std::cin >> t;
	if (t <  x)
	{
		std::cout << phonebook.getContact(t).getFirstName() << std::endl;
		std::cout << phonebook.getContact(t).getLastName() << std::endl;
		std::cout << phonebook.getContact(t).getNickname() << std::endl;
		std::cout << phonebook.getContact(t).getPhoneNumber() << std::endl;
		std::cout << phonebook.getContact(t).getDarkestSecret() << std::endl;
	}
	else
		std::cout << "contact pas enregistre" << std::endl;
	std::cin.ignore();
}
