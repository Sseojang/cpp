#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
private:
	std::string name;

public:
	Zombie();
	~Zombie(void);

	void announce(void);
	void SetName(std::string name);
};

Zombie *ZombieHorde(int N, std::string name);

#endif /*ZOMBIEHPP*/