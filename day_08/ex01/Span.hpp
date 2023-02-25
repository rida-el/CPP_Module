#include <iostream>
#include <algorithm>
#include <exception>
#include <vector>
class Span
{
private:
    /* data */
    unsigned int n;
    std::vector<int> v;
public:
    Span(/* args */);
    Span(unsigned int n);
    Span(const Span &s);
    Span &operator=(const Span &s);
    ~Span();
    void addNumber(int n);
    void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
    int shortestSpan();
    int longestSpan();
    class FullException : public std::exception
    {
        virtual const char* what() const throw();
    };
    class NoSpanException : public std::exception
    {
        virtual const char* what() const throw();
    };
};
