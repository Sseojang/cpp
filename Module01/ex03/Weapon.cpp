#include "Weapon.hpp"

Weapon::Weapon(void)
{
	
}

Weapon::Weapon(std::string type)
{
	this->type = type;
}

const std::string &Weapon::getType(void) const
{
	return type;
}

void Weapon::setType(std::string type)
{
	this->type = type;
}