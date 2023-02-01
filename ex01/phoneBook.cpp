// #include <iostream>
#include "./PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	// std::cout << "default constracted called" << std::endl;
}

void PhoneBook::EXIT()
{
	exit(0);
}
void PhoneBook::ADD(std::string contactInfo[5], int index)
{
	contacts[index] = Contact(contactInfo[0], contactInfo[1], contactInfo[2], contactInfo[3], contactInfo[4]);
	std::cout << "==>CONTACT ADDED SUCCESSFULLY<==" << '\n';
}