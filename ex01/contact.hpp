#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"

class Contact
{
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string darkestSecret;
    unsigned int phoneNumber;
    public:
        Contact();
	    Contact(std::string firstName, std::string lastName, std::string nickname, std::string darkestSecret, std::string phoneNumber);
        void    display();
	    void	displayContact(int id);
	    void	displayFullContact(int id);
};

#endif