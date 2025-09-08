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
    Fixed();//default constructor that initializes the fixed-point number to 0
    Fixed(const Fixed& other);//copy constructor 
    ~Fixed();//destructor
    Fixed &operator=(const Fixed &src);//copy assignment operator overload
    int getRawBits(void) const;//getter for the raw value
    void setRawBits(int const raw);//setter for the raw value
};


#endif