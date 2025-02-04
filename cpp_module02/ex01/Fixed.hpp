#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
class Fixed{
    private:
        int FP_value; // fixed-point number value .
        static const int NFB = 8; // number fractional bits .
    public :
        Fixed();
        // new //
        Fixed(const int x);
        Fixed(const float x);
        float toFloat(void)const;
        int toInt(void) const;
        // --- //
        Fixed(const Fixed &anotherfixed);
        Fixed& operator=(const Fixed& other);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        ~Fixed();
};

std::ostream& operator<<(std::ostream &os, const Fixed& ove_fixed);


#endif