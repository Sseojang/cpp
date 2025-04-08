#include "Zombie.hpp"

Zombie::Zombie()
{

}

Zombie::~Zombie(void)
{
	std::cout << this->name << " dead" << std::endl;
}

void Zombie::SetName(std::string name)
{
	this->name = name;
}

void Zombie::announce(void)
{
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
