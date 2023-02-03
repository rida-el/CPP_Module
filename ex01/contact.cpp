#include "contact.hpp"

Contact::Contact()
{
}

Contact::Contact(std::string firstName, std::string lastName, std::string nickName, std::string darkestSecret, std::string phoneNumber)
{
	first_Name = firstName;
	last_Name = lastName;
	nick_Name = nickName;
	darkest_Secret = darkestSecret;
	phone_Number = phoneNumber;
}

std::string checkInfoLen(std::string str)
{
	if (str.length() < 10)
		return (str);
	else
		return (str.substr(0, 9).append("."));
}

void Contact::AllColumns(int id)
{
	std::cout << "|" << std::right << std::setw(10) << id + 1
			  << "|" << std::right << std::setw(10) << checkInfoLen(first_Name) 
			  << "|" << std::right << std::setw(10) << checkInfoLen(last_Name) 
			  << "|" << std::right << std::setw(10) << checkInfoLen(nick_Name)  << "|" << '\n';
}

void Contact::SingleContact(int id)
{
	std::cout << "*___________________________________________*" << '\n';
	std::cout << "*               CONTACT INFO                *" << '\n';
	std::cout << "*___________________________________________*" << '\n';
	std::cout << std::right << std::setw(10) << "index        :" << id + 1 << '\n'
			  << std::right << std::setw(10) << "firstName    :" << first_Name << '\n'
			  << std::right << std::setw(10) << "lastName     :" << last_Name << '\n'
			  << std::right << std::setw(10) << "nickName     :" << nick_Name << '\n'
			  << std::right << std::setw(10) << "phoneNumber  :" << phone_Number << '\n';
}