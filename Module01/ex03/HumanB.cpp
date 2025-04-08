#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

void HumanB::attack(void)
{
	if (weaponB)
		std::cout << this->name << " attacks with their " << weaponB->getType() << std::endl;
	else 
		std::cout << this->name << " has no weapon!" << std::endl;
}

void HumanB::setWeapon(Weapon &type)
{
	weaponB = &type;
}