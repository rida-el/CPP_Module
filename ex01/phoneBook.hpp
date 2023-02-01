#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

#include  "./Contact.hpp"
#include <string.h>

class PhoneBook
{
private :
    Contact contacts[8];
public :	
    PhoneBook();
    void ADD(std::string *contactInfo, int index);
	void SEARCH(int id);
    void EXIT();
};

#endif