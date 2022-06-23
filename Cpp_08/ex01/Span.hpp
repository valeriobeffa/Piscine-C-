#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <exception>
#include <vector>
#include <time.h>

class Span
{
    public:
        Span();
        ~Span();
        Span(const Span& copy);
        Span(int n);
        Span& operator=(const Span& obj);
        void addNumber(int num);
        unsigned int shortestSpan();
        unsigned int longestSpan();
        class numberException:public std::exception
        {
            const char *what() const throw();
        };
        class fullVectorException :public std::exception
        {
            const char* what() const throw();
        };
        void fill();
    private:
        unsigned int _num;
        std::vector<int> _vector;
};

#endif