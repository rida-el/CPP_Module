#include "span.hpp"


int main()
{
    try
    {
        Span sp = Span(2);
        std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 100};
        sp.addNumber(v.begin(), v.end());
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(3);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}