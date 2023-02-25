#include "easyfind.hpp"

int main()
{
    try{
        std::vector<int> v;
        v.push_back(1);
        v.push_back(2);
        v.push_back(3);
        v.push_back(4);
        v.push_back(0);
        easyfind(v, 2);
        // std::cout << easyfind(v, 3) << std::endl;
    }catch(const char* e){
        std::cout << e << std::endl;
    }
    
}