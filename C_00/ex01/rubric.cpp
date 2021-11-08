#include "rubric.hpp"

void rubric::ft_init_num()
{
    this->num = 0;
}

void rubric::ft_add_num()
{
    this->num++;
}

int rubric::ft_return_num()
{
    return (this->num);
}

void rubric::ft_display_list()
{
    int i = 1;
    std::string tmp;

    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    while (i <= this->num && i <= 8)
    {
        std::cout << "|" << "         " << i << "|";
        std::cout.width(9);
        if (this->contact[i - 1].first_name.length() <= 10)
        {
            std::cout.width(10);
            std::cout << this->contact[i - 1].first_name;
        }
        else
        {
            tmp.append(this->contact[i - 1].first_name, 0, 9);
            std::cout << tmp << ".";
            tmp = "";
        }
        std::cout << "|";
        if (this->contact[i - 1].last_name.length() <= 10)
        {
            std::cout.width(10);
            std::cout << this->contact[i - 1].last_name;
        }
        else
        {
            tmp.append(this->contact[i - 1].last_name, 0, 9);
            std::cout << tmp << ".";
            tmp = "";
        }
        std::cout << "|";
        if (this->contact[i - 1].nickname.length() <= 10)
        {
             std::cout.width(10);
            std::cout << this->contact[i - 1].nickname;
        }
        else
        {
            tmp.append(this->contact[i - 1].nickname, 0, 9);
            std::cout << tmp << ".";
            tmp = "";
        }
        std::cout << "|" << std::endl;
        i++;
    }
    std::cout << std::endl;
}