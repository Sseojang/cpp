#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int value;
	static const int bit = 8;
public:
	Fixed();
	Fixed(const int num);
	Fixed(const float num);
	~Fixed();
	Fixed(const Fixed &ref);
	Fixed& operator=(const Fixed &ref);
	
	bool operator<(const Fixed &ref) const;
	bool operator>(const Fixed &ref) const;
	bool operator<=(const Fixed &ref) const;
	bool operator>=(const Fixed &ref) const;
	bool operator==(const Fixed &ref) const;
	bool operator!=(const Fixed &ref) const;

	Fixed	operator+(Fixed const &ref) const;
	Fixed	operator-(Fixed const &ref) const;
	Fixed	operator*(Fixed const &ref) const;
	Fixed	operator/(Fixed const &ref) const;

	Fixed	&operator++(void);
	const Fixed	operator++(int);
	Fixed	&operator--(void);
	const Fixed	operator--(int);

	static Fixed	&min(Fixed &ref1, Fixed &ref2);
	static const Fixed	&min(Fixed const &ref1, Fixed const &ref2);
	static Fixed	&max(Fixed &ref1, Fixed &ref2);
	static const Fixed	&max(Fixed const &ref1, Fixed const &ref2);

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};

#endif /*FIXED_HPP*/