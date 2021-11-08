#ifndef RUBRIC_HPP
#define RUBRIC_HPP

#include "contact.hpp"
#include <iostream>
#include <string.h>


class rubric
{
    public:
        contact contact[8];
        int     num;
        void ft_init_num();
        void ft_add_num();
        int  ft_return_num();
        void ft_display_list();
};
#endif