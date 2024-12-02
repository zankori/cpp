#include "Fixed.hpp"

Fixed::Fixed()
{
    this->FP_value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &anotherfixed)
{
    this->FP_value = anotherfixed.FP_value;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    if (this == &other)
        return *this;
    this->FP_value = other.FP_value;
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->FP_value);
}


void Fixed::setRawBits(int const raw)
{
    this->FP_value = raw;
    std::cout << "setRawBits member function called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}