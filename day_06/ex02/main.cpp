#include "Base.hpp"

void leaks()
{
    system("leaks Base");
}


int main()
{
    Base *base = generate();
    identify_from_pointer(base);
    identify_from_reference(*base);
    delete base;
    // atexit(leaks);
    return 0;
}