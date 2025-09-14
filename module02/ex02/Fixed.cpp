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
	if (this != &src)// self-assignment check (no need for it here, but good practice)
		this->value = src.getRawBits();

	return *this;
}

// Public Methods

int	Fixed::toInt(void)const
{
	return (this->value >> this->fractionalBits);
}

float	Fixed::toFloat(void)const
{
	return ((float)this->value / (float)(1 << this->fractionalBits));
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

// Overloaded Comparison Operators
bool	Fixed::operator>(Fixed fixed) const
{
	return (this->toFloat() > fixed.toFloat());
}

bool	Fixed::operator<(Fixed fixed) const
{
	return (this->toFloat() < fixed.toFloat());
}

bool	Fixed::operator>=(Fixed fixed) const
{
	return (this->toFloat() >= fixed.toFloat());
}

bool	Fixed::operator<=(Fixed fixed) const
{
	return (this->toFloat() <= fixed.toFloat());
}

bool	Fixed::operator==(Fixed fixed) const
{
	return (this->toFloat() == fixed.toFloat());
}

bool	Fixed::operator!=(Fixed fixed) const
{
	return (this->toFloat() != fixed.toFloat());
}

// Overloaded Arithmetic Operators
Fixed	Fixed::operator+(Fixed const &copy) const
{
	Fixed	result(this->toFloat() + copy.toFloat());
	return (result);
}

Fixed	Fixed::operator-(Fixed const &copy) const
{
	Fixed	result(this->toFloat() - copy.toFloat());
	return (result);
}

Fixed	Fixed::operator*(Fixed const &copy) const
{
	Fixed	result(this->toFloat() * copy.toFloat());
	return (result);
}

Fixed	Fixed::operator/(Fixed const &copy) const
{
	Fixed	result(this->toFloat() / copy.toFloat());
	return (result);
}

// Overloaded Increment/Decrement Operators
	//prefix
Fixed	&Fixed::operator++(void)
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed	&Fixed::operator--(void)
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}
	//postfix
Fixed	Fixed::operator++(int )
{
	Fixed	temp = *this;
	this->setRawBits(this->getRawBits() + 1);
	return (temp);
}

Fixed	Fixed::operator--(int )
{
	Fixed	temp = *this;
	this->setRawBits(this->getRawBits() - 1);
	return (temp);
}

Fixed&	Fixed::min(Fixed& objX, Fixed& objY)
{
	return (objX < objY ? objX : objY);
}

Fixed&	Fixed::min(const Fixed& objX, const Fixed& objY)
{
	return ((Fixed&)(objX < objY ? objX : objY));
}

Fixed&	Fixed::max(Fixed& objX, Fixed& objY)
{
	return (objX > objY ? objX : objY);
}

Fixed&	Fixed::max(const Fixed& objX, const Fixed& objY)
{
	return ((Fixed&)(objX > objY ? objX : objY));
}



std::ostream	&operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return (o);
}