// #include <iostream>
#include "./phoneBook.hpp"

void displayTableHeader(void)
{
	std::cout << "*___________________________________________*" << '\n';
	std::cout << "|" << std::right << std::setw(10) << "index"
			  << "|" << std::right << std::setw(10) << "firstName"
			  << "|" << std::right << std::setw(10) << "lastName"
			  << "|" << std::right << std::setw(10) << "nickName"
			  << "|" << '\n';
	std::cout << "*-------------------------------------------*" << '\n';
}

PhoneBook::PhoneBook()
{
}

void PhoneBook::EXIT()
{
	exit(0);
}
void PhoneBook::ADD(std::string contactInfo[5], int index)
{
	contacts[index] = Contact(contactInfo[0], contactInfo[1], contactInfo[2], contactInfo[3], contactInfo[4]);
	std::cout  << GREEN << "** CONTACT ADDED SUCCESSFULLY **" << RESET << std::endl;
}

void PhoneBook::SEARCH(int id)
{
	int i;
	int entredId;
	std::string userId;

	i = 0;
	if (id == 0)
	{
		std::cout << "THE PHONE BOOKE IS EMPTY" << '\n';
		return ;
	}
	displayTableHeader();
	id > 8 ? id = 8 : id;
	while (i < id)
	{
		contacts[i].AllColumns(i);
		i++;
	}
	std::cout << "*-------------------------------------------*" << '\n';
	while (true)
	{
		std::cout << "Please enter a valid Contact Id" << '\n';
		if (getline(std::cin, userId).eof() == true)
			exit(1);
		std::stringstream(userId) >> entredId;
		if (entredId >= 1 && entredId <= id)
		{
			contacts[entredId - 1].SingleContact(entredId - 1);
			break;
		}
	}
}