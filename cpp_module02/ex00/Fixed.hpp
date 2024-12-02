#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
    private:
    int FP_value; // fixed-point number value .
    static const int NFB = 8; // number fractional bits .
    public :
    Fixed();
    Fixed(const Fixed &anotherfixed);
    Fixed& operator=(const Fixed& other);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    ~Fixed();
};

#endif