#include "Zombie.hpp"

int main(void)
{
	Zombie *test = ZombieHorde(10, "test");
	for(int i=0;i<10;i++)
		test[i].announce();
	delete [] test;
	return 0;
}