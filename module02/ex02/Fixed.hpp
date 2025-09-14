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
    
    
    // member functions
    float toFloat(void) const;// converts the fixed-point value to a floating-point value
    int toInt(void) const;// converts the fixed-point value to an integer value
    int getRawBits(void) const;
    void setRawBits(int const raw);
    
    //overloaded operators
        Fixed &operator=(const Fixed &src);// copy assignment operator
        
        // Comparison Operators
        bool operator>(Fixed fixed)const;
	    bool operator<(Fixed fixed)const;
	    bool operator>=(Fixed fixed)const;
	    bool operator<=(Fixed fixed)const;
	    bool operator==(Fixed fixed)const;
	    bool operator!=(Fixed fixed)const;

        // Arithmetic Operators
		Fixed operator+ (const Fixed& obj) const;
	    Fixed operator- (const Fixed& obj) const;
	    Fixed operator* (const Fixed& obj) const;
	    Fixed operator/ (const Fixed& obj) const;

		// pre-increment Operators
		Fixed &operator++();
		Fixed &operator--();
		// post-increment Operators
		Fixed operator++(int );
		Fixed operator--(int );

        // min and max
        static Fixed &min(Fixed &objX, Fixed &objY);
        static Fixed &min(const Fixed &objX, const Fixed &objY);
        static Fixed &max(Fixed &objX, Fixed &objY);
        static Fixed &max(const Fixed &objX, const Fixed &objY);

};

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nbr);

#endif