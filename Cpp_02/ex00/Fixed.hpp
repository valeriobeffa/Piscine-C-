#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int _fix;
        static const int _fract = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(Fixed& fixed);
        Fixed& operator=(const Fixed& fixed);
        int getRawBits (void) const; 
        void setRawBits(int const raw);
};

#endif