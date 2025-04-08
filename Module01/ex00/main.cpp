#include "Zombie.hpp"

int main(void)
{
	Zombie stack("stack1");
	Zombie *heap = newZombie("heap");

	
	heap->announce();
	stack.announce();
	delete heap;
	randomChump("stack2");
	return 0;
}