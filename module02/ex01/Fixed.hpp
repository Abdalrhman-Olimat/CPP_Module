#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int                 value;
    static const int    fractionalBits;
public:
    //constructors
    Fixed();// default constructor
    Fixed(const Fixed& copy);// copy constructor
	Fixed(const int input);// int constructor
	Fixed(const float input);// float constructor
    
    //destructor
    ~Fixed();
    
    Fixed &operator=(const Fixed &src);// copy assignment operator
    
    // member functions
    float toFloat(void) const;// converts the fixed-point value to a floating-point value
    int toInt(void) const;// converts the fixed-point value to an integer value
    int getRawBits(void) const;
    void setRawBits(int const raw);
};

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nbr);

#endif