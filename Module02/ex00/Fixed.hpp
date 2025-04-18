#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int integer;
	static const int bit = 8;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &ref);
	Fixed& operator=(const Fixed &ref);

	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif /*FIXED_HPP*/