#include "contact.hpp"

Contact::Contact(/* args */)
{
}

Contact::Contact(std::string firstName, std::string lastName, std::string nickName, std::string darkestSecret, std::string phoneNumber)
{
	_firstName = firstName;
	_lastName = lastName;
	_nickname = nickName;
	_darkestSecret = darkestSecret;
	_phoneNumber = phoneNumber;
}

Contact::~Contact()
{	
} 
std::string checkInfoLen(std::string str)
{
	if (str.length() < 10)
		return (str);
	else
		return (str);
}

void Contact::displayColumns(int id)
{
	std::cout << "|" << std::right << std::setw(10) << id + 1
			  << "|" << std::right << std::setw(10) << _firstName
			  << "|" << std::right << std::setw(10) << _lastName
			  << "|" << std::right << std::setw(10) << _nickname << "|" << '\n';
}

void Contact::displaySingleContact(int id)
{
	std::cout << "*___________________________________________*" << '\n';
	std::cout << "*               CONTACT INFO                *" << '\n';
	std::cout << "*___________________________________________*" << '\n';
	std::cout << std::right << std::setw(10) << "index        :" << id + 1 << '\n'
			  << std::right << std::setw(10) << "firstName    :" << _firstName << '\n'
			  << std::right << std::setw(10) << "lastName     :" << _lastName << '\n'
			  << std::right << std::setw(10) << "nickName     :" << _nickname << '\n'
			  << std::right << std::setw(10) << "phoneNumber  :" << _phoneNumber << '\n';
}