#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include  "Contact.hpp"

class PhoneBook
{
private :
    Contact contact[8];
public :	
    PhoneBook();
    void ADD(std::string *info, int id);
	void SEARCH(int id);
    void EXIT();
    int max_contact_number;
};

#endif