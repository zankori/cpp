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
        Fixed(const int x);
        Fixed(const float x);
        float toFloat(void)const;
        int toInt(void) const;
        // --- //
        // The 6 comparison operators: >, <, >=, <=, == and !=. //
        bool operator>(const Fixed& other);
        bool operator<(const Fixed& other);
        bool operator>=(const Fixed& other);
        bool operator<=(const Fixed& other);
        bool operator==(const Fixed& other);
        bool operator!=(const Fixed& other);

        //  The 4 arithmetic operators: +, -, *, and //
        Fixed operator+(const Fixed& other);
        Fixed operator-(const Fixed& other);
        Fixed operator*(const Fixed& other);
        Fixed operator/(const Fixed& other);
        // The 4 increment/decrement
        Fixed& operator++();
        Fixed operator++(int);
        Fixed& operator--();
        Fixed operator--(int);
        //  four public overloaded member functions //
        static Fixed& min(  Fixed& fp1,  Fixed& fp2);
        static Fixed& min(const Fixed& fp1, const Fixed& fp2);
        static Fixed& max( Fixed& fp1,  Fixed& fp2);
        static Fixed& max(const Fixed& fp1, const Fixed& fp2);

        // ------------ //

        Fixed(const Fixed &anotherfixed);
        Fixed& operator=(const Fixed& other);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        ~Fixed();
};

std::ostream& operator<<(std::ostream &os, const Fixed& ove_fixed);

#endif