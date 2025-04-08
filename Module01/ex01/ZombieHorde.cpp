#include "Zombie.hpp"

Zombie *ZombieHorde(int N, std::string name)
{
	int i = 0;
	std::string noneHuman;
	Zombie *ret = new Zombie[N];
	while (i < N)
	{
		noneHuman = i + '0';
		noneHuman.append(name);
		ret[i].SetName(noneHuman);
		i++;
	}
	return ret;
}