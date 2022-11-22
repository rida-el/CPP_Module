#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>

class Contact
{
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string darkestSecret;
    unsigned int phoneNumber;
public:
    void    display();
	void	displayContact(int id);
	void	displayFullContact(int id);
};

#endif