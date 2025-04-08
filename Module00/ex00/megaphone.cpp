#include <iostream>

void	ChangeAlpha(char *s1)
{
	int i = 0;
	char c = '\0';
	while (s1[i])
	{
		if (s1[i] >= 'a' && s1[i] <= 'z')
			c = s1[i] - 32;
		else
			c = s1[i];
		std::cout<<c<<std::flush;
		i++;
	}
}

int main(int ac, char **av)
{
	int i = 1;
	if (ac == 1)
	{
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
		return 0;
	}
	while(av[i] != NULL)
		ChangeAlpha(av[i++]);
	std::endl(std::cout);
	return 0;
}