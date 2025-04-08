#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name; //this->name은 멤버 변수, name은 매개변수
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " dead" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
