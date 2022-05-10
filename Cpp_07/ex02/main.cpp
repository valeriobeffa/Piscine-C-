#include "Array.hpp"
#include <iostream>
#include <stdio.h>

int main()
{  
    Array<int> arr1(10);

    std::cout << "Array size is " << arr1.size() << std::endl;

    arr1[0] = 1;
    arr1[1] = 1;
    arr1[2] = 2;
    arr1[3] = 3;
    arr1[4] = 5;
    arr1[5] = 8;
    arr1[6] = 13;
    arr1[7] = 21;
    arr1[8] = 34;
    arr1[9] = 55;
    try
    {
        arr1[10] = 89;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    Array<float> arr2(4);

    std::cout << "Array size is " << arr2.size() << std::endl;

    arr2[0] = 3.1415;
    arr2[1] = 1.1111;
    arr2[2] = 2.2222;
    arr2[3] = 3.3333;

    for (unsigned int i = 0; i < arr2.size(); i++)
        std::cout << arr2[i] << std::endl;

    std::cout << std::endl;

    arr2[0] = arr1[7];

    for (unsigned int i = 0; i < arr2.size(); i++)
        std::cout << arr2[i] << std::endl;

    std::cout << std::endl;

    Array<int> arr3 = arr1;

    for (unsigned int i = 0; i < arr3.size(); i++)
        std::cout << arr3[i] << std::endl;
}