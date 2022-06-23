#include "easyfind.hpp"

int main()
{
    std::vector<int> vector;
    for (int i = 0; i < 100; i++)
        vector.push_back(i + 17);
    std::cout << easyfind(vector, 116) << std::endl;
}