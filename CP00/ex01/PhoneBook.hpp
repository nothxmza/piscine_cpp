#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iomanip>

std::string ft_cut(std::string str);

class PhoneBook
{
	public :
		Contact	ft_add();
		void	ft_search(PhoneBook phonebook,int i);
		void	setContact(Contact contact,int i);
		Contact getContact(int i);
	private :
		Contact contacts[8];
};

#endif
