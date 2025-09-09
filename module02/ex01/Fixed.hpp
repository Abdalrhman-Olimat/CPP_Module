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
    Fixed(const Fixed& copy); 
	Fixed(const int input);
	Fixed(const float input);
    //destructor
    ~Fixed();
    Fixed &operator=(const Fixed &src);
    // Public Methods
    float toFloat(void) const;
    int toInt(void) const;
    int getRawBits(void) const;
    void setRawBits(int const raw);
};


#endif