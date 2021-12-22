#ifndef CONTACT_HPP
# define CONTACT_HPP 

#include <iostream>
#include <string>

class Contact
{
	public:
		void setFirstName(std::string first_name);
		std::string getFirstName();
		void setLastName(std::string last_name);
		std::string getLastName();
		void setNickname(std::string nickname);
		std::string getNickname();
		void setPhoneNumber(std::string phone_number);
		std::string getPhoneNumber();
		void setDarkestSecret(std::string darkest_secret);
		std::string getDarkestSecret();
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
};

#endif