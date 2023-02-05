#ifndef ZOMBIE
#define ZOMBIE

#include <string>
#include <iostream>

class zombie
{
private:
    std::string name;
public:
    void announce( void );
    void set_name(std::string name);
    ~zombie();
};

zombie* zombieHorde( int N, std::string name );

#endif