

#include "phoneBook.hpp"
#include "contact.hpp"

void displayCommands()
{
	std::cout << RESET << "Select the command from the list :" << std::endl;
    std::cout << GREEN << std::internal << "*" << std::setw(10) << "ADD" << std::endl;
	std::cout << GREEN << std::internal << "*" << std::setw(10) << "SEARCH" << std::endl;
	std::cout << GREEN << std::internal << "*" << std::setw(10) << "EXIT" << RESET << std::endl;
}
void	fields_assignement(std::string *fields)
{
	fields[0] = "First name     : "; 
	fields[1] = "Last name      : "; 
	fields[2] = "Nickname       : "; 
	fields[3] = "Phone number   : "; 
	fields[4] = "Darkest secret : "; 
}


int main()
{
    int index = 0;
    std::string cmd;
    std::string fields[5];
    std::string contactInfo[5];
    PhoneBook contact;
    displayCommands();
    fields_assignement(fields);
    while (1)
    {
        getline(std::cin, cmd);
        if (std::cin.eof())
            exit (0);
        if (cmd == "EXIT")
            contact.EXIT();
        else if (cmd.compare("ADD") == 0)
        {
            int i = 0;
            std::cout << "add the contact" << std::endl;
            while (i < 5)
            {
                contactInfo[i] = "";
                while ((contactInfo[i].empty() || contactInfo[i] == "\n"))
                {
                    std::cout << fields[i];
                    getline(std::cin, contactInfo[i]);
                    if (std::cin.eof())
                        exit (0);
                }
                i++;
            }
            contact.ADD(contactInfo, index % 8);
            index++;
        }
        else if(cmd.compare("SEARCH") == 0)
        {
            contact.SEARCH(index);
        }
        else
            std::cout << RED << "ERROR:" << RESET << "Select the command from the list :"<<std::endl;
    }
    return (0);
}