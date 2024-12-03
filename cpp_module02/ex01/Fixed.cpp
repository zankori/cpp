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