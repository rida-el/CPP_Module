#include <iostream>
#include <string>
#include <cstdint>

struct Data
{
    int n;
    std::string s1;
    std::string s2;
};


class Serializer 
{
    public:
        Serializer();
        ~Serializer();
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};