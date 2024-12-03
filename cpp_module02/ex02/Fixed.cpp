#include "Fixed.hpp"

Fixed::Fixed()
{
    this->FP_value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &anotherfixed)
{
    std::cout << "Copy constructor called" << std::endl;
    this->FP_value = anotherfixed.FP_value;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &other)
        return *this;
    this->FP_value = other.FP_value;
    return *this;
}

int Fixed::getRawBits(void) const
{
    return (this->FP_value);
}


void Fixed::setRawBits(int const raw)
{
    this->FP_value = raw;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

// the new one //
std::ostream& operator<<(std::ostream &os, const Fixed& ove_fixed)
{
    os << ove_fixed.toFloat();
    return (os);
}

Fixed::Fixed(const int x)
{
    std::cout << "Int constructor called" << std::endl;
   this->FP_value = x << this->NFB;
}

Fixed::Fixed(const float x)
{
    std::cout << "Float constructor called" << std::endl;
    this->FP_value =   roundf(x * ( 1 << this->NFB));
}

float Fixed::toFloat(void)const
{
     return ((float)this->FP_value / 256);
}

int Fixed::toInt(void) const
{
    return (this->FP_value >> this->NFB);
}
// -- //
// The 6 comparison operators: >, <, >=, <=, == and !=. //

    bool Fixed::operator>(const Fixed& other)
    {
        if (this->toFloat() > other.toFloat())
            return true;
        return false;
    }
    bool Fixed::operator<(const Fixed& other)
    {
        if (this->toFloat() < other.toFloat())
            return true;
        return false;
    }
    bool Fixed::operator>=(const Fixed& other)
    {
        if (this->toFloat() >= other.toFloat())
            return true;
        return false;
    }
    bool Fixed::operator<=(const Fixed& other)
    {
        if (this->toFloat() <= other.toFloat())
            return true;
        return false;
    }
    bool Fixed::operator==(const Fixed& other)
    {
        if (this->toFloat() == other.toFloat())
            return true;
        return false;
    }
    bool Fixed::operator!=(const Fixed& other)
    {
        if (this->toFloat() != other.toFloat())
            return true;
        return false;
    }

//  The 4 arithmetic operators: +, -, *, and //
    Fixed Fixed::operator+(const Fixed& other)
    {
        Fixed new_one;
        float x1 = this->toFloat();
        float x2 = other.toFloat();
        new_one.FP_value = (float)(x1 + x2) * (1 << 8);
        return new_one;    
    }
    Fixed Fixed::operator-(const Fixed& other)
    {
        Fixed new_one;
        float x1 = this->toFloat();
        float x2 = other.toFloat();
        new_one.FP_value = (float)(x1 - x2) * (1 << 8);
        return new_one;
    }
    Fixed Fixed::operator*(const Fixed& other)
    {
        Fixed new_one;
        float x1 = this->toFloat();
        float x2 = other.toFloat();
        new_one.FP_value = (float)(x1 * x2) * (1 << 8);
        return new_one;

    }
    Fixed Fixed::operator/(const Fixed& other)
    {
        Fixed new_one;
        float x1 = this->toFloat();
        float x2 = other.toFloat();
        new_one.FP_value = (float)(x1 / x2) * (1 << 8);
        return new_one;

    }
        // The 4 increment/decrement
    Fixed& Fixed::operator++()
    {
        this->FP_value = roundf((this->toFloat() + 0.00390625f) * ( 1 << this->NFB));
        return (*this);
    }
    Fixed Fixed::operator++(int)
    {
        Fixed older(*this);
        this->FP_value = roundf((this->toFloat() + 0.00390625f) * ( 1 << this->NFB));
        return (older);
    }
    Fixed& Fixed::operator--()
    {
        this->FP_value = roundf((this->toFloat() - 0.00390625f) * ( 1 << this->NFB));
        return (*this);

    }
    Fixed Fixed::operator--(int)
    {
        Fixed older(*this);
        this->FP_value = roundf((this->toFloat() - 0.00390625f) * ( 1 << this->NFB));
        return (older);
    }

        //  four public overloaded member functions //
        Fixed& Fixed::min(  Fixed& fp1,  Fixed& fp2)
        {
            if (fp1.toFloat() > fp2.toFloat())
                return (fp2);
            return (fp1);

        }
         Fixed& Fixed::min(  const Fixed& fp1,  const Fixed& fp2)
        {
            if (fp1.toFloat() > fp2.toFloat())
                return ((Fixed&)fp2);
            return ((Fixed&)fp1);

        }
         Fixed& Fixed::max(  Fixed& fp1,  Fixed& fp2)
        {
            if (fp1.toFloat() > fp2.toFloat())
                return (fp1);
            return (fp2);

        }
         Fixed& Fixed::max( const Fixed& fp1, const Fixed& fp2)
        {
            if (fp1.toFloat() > fp2.toFloat())
                return ((Fixed&)fp1);
            return ((Fixed&)fp2);
            
        }

