#include "iter.hpp"

template <typename T>
void print(T& t)
{
    std::cout << t << std::endl;
    return;
}

int main()
{
    float array[] = {3.1415, 9.9999, 0.0001, 10.0/7.0};
    std::string array1[] = {"hello", "this", "is", "working"};
    iter(array, 4, print);
    std::cout << std::endl;
    iter(array1, 4, print);
}