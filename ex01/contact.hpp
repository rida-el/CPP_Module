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
    // std::string firstName;
    // std::string lastName;
    // std::string nickName;
    // std::string darkestSecret;
    // unsigned int phoneNumber;
    std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _darkestSecret;
	std::string _phoneNumber;
    public:
        Contact();
	    Contact(std::string firstName, std::string lastName, std::string nickname, std::string darkestSecret, std::string phoneNumber);
        void    display();
	    void	displayColumns(int id);
	    void	displaySingleContact(int id);
        ~Contact();
};

#endif