#include <iostream>
#include <string>
#include "phonebook.hpp"

void	Menu(void);

int	main(void)
{
	std::string command;
	PhoneBook phone;
	while (1)
	{
		Menu();
		std::cout << "Selection : " <<std::flush;
		std::getline(std::cin, command);
		if (command.find("ADD") != std::string::npos || command.find("add") != std::string::npos)
			phone.Add();
		else if (command.find("SEARCH") != std::string::npos || command.find("search") != std::string::npos)
			phone.Print();
		else if (command.find("EXIT") != std::string::npos || command.find("exit") != std::string::npos)
			return 0;
		else
			std::cout << "Illegal Selection." <<std::endl;
	}
	return 0;
}

void	Menu(void)
{
	std::cout << "----MENU----" << std::endl;
	std::cout << "1. ADD" <<std::endl;
	std::cout << "2. SEARCH" <<std::endl;
	std::cout << "3. EXIT" <<std::endl;
}