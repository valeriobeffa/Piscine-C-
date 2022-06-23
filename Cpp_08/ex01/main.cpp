#include "Span.hpp"

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    try
    {
        sp.addNumber(12);
    }
    catch (const std::exception& e)
    {
        std::cerr <<e.what() << std::endl;
    }
    Span s(1);
    s.addNumber(42);
    try
    {
        std::cout << s.shortestSpan() << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr <<e.what() << std::endl;
    }
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    Span span = Span(42424);
    span.fill();
    std::cout << span.shortestSpan() << std::endl;
    std::cout << span.longestSpan() << std::endl;
    return 0;
}