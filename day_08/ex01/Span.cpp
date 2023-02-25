#include "Span.hpp"

Span::Span(/* args */)
{
}

Span::Span(unsigned int n)
{
    this->n = n;
}

Span::Span(const Span &s)
{
    *this = s;
}

Span &Span::operator=(const Span &s)
{
    if (this != &s)
    {
        this->n = s.n;
        this->v = s.v;
    }
    return *this;
}

Span::~Span()
{
}

void Span::addNumber(int n)
{
    if (this->v.size() == this->n)
        throw FullException();
    this->v.push_back(n);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (this->v.size() + (end - begin) > this->n)
        throw FullException();
    this->v.insert(this->v.end(), begin, end);
}

int Span::shortestSpan()
{
    if (this->v.size() < 2)
        throw NoSpanException();
    std::vector<int> v = this->v;
    std::sort(v.begin(), v.end());
    int min = v[1] - v[0];
    for (size_t i = 2; i < v.size(); i++)
    {
        if (v[i] - v[i - 1] < min)
            min = v[i] - v[i - 1];
    }
    return min;
}

int Span::longestSpan()
{
    if (this->v.size() < 2)
        throw NoSpanException();
    std::vector<int> v = this->v;
    std::sort(v.begin(), v.end());
    return v[v.size() - 1] - v[0];
}

const char* Span::FullException::what() const throw()
{
    return "Span is full";
}


const char* Span::NoSpanException::what() const throw()
{
    return "Span has no span to find span of the span";
}

