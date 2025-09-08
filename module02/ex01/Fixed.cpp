#include "Fixed.hpp"

const int Fixed::fractionalBits = 8;

// Constructors
Fixed::Fixed(): value(0)
{
	std::cout << "Fixed Default Constructor called" << std::endl;
}

Fixed::Fixed(const int input)
{
	std::cout << "Fixed Int Constructor called" << std::endl;
	this->value = input << this->fractionalBits;
}

Fixed::Fixed(const float input)
{
	std::cout << "Fixed Float Constructor called" << std::endl;
	this->value = roundf(input * (1 << this->fractionalBits));
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Fixed Copy Constructor called" << std::endl;
	*this = copy;
}

// Deconstructors
Fixed::~Fixed()
{
	std::cout << "Fixed Deconstructor called" << std::endl;
}

// Overloaded Operators
Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << "Fixed Assignation operator called" << std::endl;
	if (this != &src)
		this->value = src.getRawBits();

	return *this;
}

// Public Methods
float	Fixed::toFloat(void)const
{
	return ((float)this->value / (float)(1 << this->fractionalBits));
}

int	Fixed::toInt(void)const
{
	return (this->value >> this->fractionalBits);
}
// Getter
int	Fixed::getRawBits(void)const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

// Setter
void	Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}


std::ostream	&operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return (o);
}