#include "Harl.hpp"

static int numReturn(char *s);
static void noneChoice(void);

int main(int ac, char **av)
{
	int num = -1;
	Harl harl;
	if (ac != 2)
		return -1;
	num = numReturn(av[1]);
	switch (num)
	{
	case DEBUG:
		harl.complain("DEBUG");
		break;
	case INFO:
		harl.complain("INFO");
		break;
	case WARNING:
		harl.complain("WARNING");
		break;
	case ERROR:
		harl.complain("ERROR");
		break;
	default:
		noneChoice();
		break;
	}
	return 0;
}

static int numReturn(char *s)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	std::string complain(s);
	for (int i = 0; i < 4; i++)
	{
		if (complain.compare(levels[i]) == 0)
			return i;
	}
	return -1;
}

static void noneChoice(void)
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
