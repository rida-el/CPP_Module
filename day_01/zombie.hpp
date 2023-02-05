#include <string>
#include <iostream>
class zombie
{
private:
    std::string name;
public:
    zombie();
    zombie(std::string _name);
    ~zombie();
    void announce( void );
    void randomChump( std::string name );
};

