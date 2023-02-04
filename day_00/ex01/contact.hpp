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
	private:
 		std::string first_Name;
		std::string last_Name;
		std::string nick_Name;
		std::string darkest_Secret;
		std::string phone_Number;
    public:
        Contact();
	    Contact(std::string firstName, std::string lastName, std::string nickname, std::string darkestSecret, std::string phoneNumber);
        void    display();
	    void	AllColumns(int id);
	    void	SingleContact(int id);
};

#endif