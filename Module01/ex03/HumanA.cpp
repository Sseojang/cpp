#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &type)
{
	this->name = name;
	weaponA = &type;
}

void HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << weaponA->getType() << std::endl;
}