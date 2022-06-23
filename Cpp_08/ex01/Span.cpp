#include "Span.hpp"

Span::Span()
{
    std::cout << "Prova" << std::endl;
}

Span::~Span()
{

}

Span::Span(int n)
{
    this->_num = n;
}

Span::Span(const Span& copy)
{
    *this = copy;
}

Span& Span::operator=(const Span& obj)
{
    this->_num = obj._num;
    this->_vector = obj._vector;
    return (*this);
}

unsigned int Span::shortestSpan()
{
    if (this->_num < 2)
        throw (numberException());
    unsigned int max = 4294967295;
    std::vector<int> copy = this->_vector;
    std::sort(copy.begin(), copy.end());
    for (unsigned int i = 0; i < (this->_num - 1); i++)
        if (static_cast<unsigned int>(copy[i + 1] - copy[i]) < max)
            max = copy[i + 1] - copy[i];
    return (max);
}

unsigned int Span::longestSpan()
{
    if (this->_num < 2)
        throw (numberException());
    unsigned int max = *std::max_element(_vector.begin(), _vector.end());
    unsigned int min = *std::min_element(_vector.begin(), _vector.end());
    return (max - min);
}

void Span::addNumber(int num)
{
    if (this->_vector.size() < _num)
        this->_vector.push_back(num);
    else
        throw (fullVectorException());
}
const char *   Span::fullVectorException::what() const throw()
{
    return ("Exception: vector is full");
}

const char *    Span::numberException::what()const throw()
{
    return ("Exception: can't find a span, too few numbers");
}

void Span::fill()
{
    srand(time(NULL));
    for (unsigned int i = 0; i < _num; i++)
        addNumber(rand());
}