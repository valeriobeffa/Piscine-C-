#include "Karen.hpp"

int main(int argc, char **argv)
{
    Karen karen;
    if (argc == 2)
    {
        std::string string = argv[1];
        if (!string.compare("DEBUG") || !string.compare("INFO") || !string.compare("WARNING") || !string.compare("ERROR"))
            karen.complain(argv[1]);
        else
            std::cout << "Please digit a valid command" << std::endl;
    }
    else
        std::cout << "Wrong arguments" << std::endl;
}
