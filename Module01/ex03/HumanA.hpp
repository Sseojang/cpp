#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
private:
	std::string name;
	Weapon *weaponA;
public:

	HumanA(std::string name, Weapon &type);
	~HumanA(){}

	void attack();
};

#endif /*HUMANA_HPP*/