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
    Fixed(const int num);
    Fixed(const float num);
    Fixed(const Fixed &fixed);
    Fixed& operator=(const Fixed& fixed);
    int toInt(void) const;
    float toFloat(void) const;
    int getRawBits (void) const;
    void setRawBits(int const raw);
};

std::ostream& operator<<(std::ostream & os, Fixed const & i);

#endif