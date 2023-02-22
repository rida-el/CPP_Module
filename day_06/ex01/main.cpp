#include "Serializer.hpp"


int main()
{
    int n = 1337;
    std::string s1 = "Hello";
    std::string s2 = "World";
    Data* data = new Data;
    data->n = n;
    data->s1 = s1;
    data->s2 = s2;
    std::cout << "data->n = " << data->n << std::endl;
    std::cout << "data->s1 = " << data->s1 << std::endl;
    std::cout << "data->s2 = " << data->s2 << std::endl;
    uintptr_t raw = Serializer::serialize(data);
    std::cout << "raw = " << raw << std::endl;
    Data* data2 = Serializer::deserialize(raw);
    std::cout << "data2->n = " << data2->n << std::endl;
    std::cout << "data2->s1 = " << data2->s1 << std::endl;
    std::cout << "data2->s2 = " << data2->s2 << std::endl;
    return 0;
}