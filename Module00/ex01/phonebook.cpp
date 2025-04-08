#include "phonebook.hpp"

void PhoneBook::Add(void)
{
	std::string input;
	std::cout << "FirstName: " << std::flush;
	std::getline(std::cin, input);
	Book[bookIndex % 8].SetfirstName(input);
	std::cout << "LastName: " << std::flush;
	std::getline(std::cin, input);
	Book[bookIndex % 8].SetlastName(input);
	std::cout << "NickName: " << std::flush;
	std::getline(std::cin, input);
	Book[bookIndex % 8].SetnickName(input);
	std::cout << "PhoneNumber: " << std::flush;
	std::getline(std::cin, input);
	Book[bookIndex % 8].SetphoneNumber(input);
	std::cout << "DarkestSecret: " << std::flush;
	std::getline(std::cin, input);
	Book[bookIndex % 8].SetdarkestSecret(input);
	std::cout << std::endl;
	bookIndex++;
}

void PhoneBook::Print(void)
{
	int num = 0;
	int flag = 0;
	if (bookIndex / 8 >= 1)
		flag = 8;
	else
		flag = bookIndex;
	if (flag == 0)
	{
		std::cout << "Nobody" << std::endl;
		return ;
	}
	std::cout << "   INDEX  | FIRSTNAME| LASTNAME | NICKNAME" << std::endl;
	while(num < flag)
	{
		std::cout<< "         " << num + 1 << std::flush;
		std::cout << "|" << std::flush;
		Editor(Book[num].GetfirstName());
		std::cout << "|" << std::flush;
		Editor(Book[num].GetlastName());
		std::cout << "|" << std::flush;
		Editor(Book[num].GetnickName());
		std::cout << std::endl;
		num++;
	}
	std::string selectIndex;
	std::cout << "Select Index: " << std::flush;
	std::getline(std::cin, selectIndex);
	Select(selectIndex);
}

void PhoneBook::Editor(const std::string text)
{
	int num = 10 - text.length();
	if (num > 0)
	{
		std::string space(num, ' '); //setw 함수 볼것 string space = "  ";
		std::cout << space << std::flush;
		std::cout << text << std::flush;
	}
	else
	{
		std::cout << text.substr(0, 9) << std::flush;
		std::cout << "." <<std::flush;
	}
}

void PhoneBook::Select(std::string selectNum)
{
	int num = selectNum[0] - '0' - 1;
	if (!(num >= 0 && num <= 7))
	{
		std::cout << "!!None Index!!" << std::endl;
		return ;
	}
	std::cout << "FirstName: " << std::flush;
	std::cout << Book[num].GetfirstName() << std::endl;
	std::cout << "LastName: " << std::flush;
	std::cout << Book[num].GetlastName() << std::endl;
	std::cout << "NickName: " << std::flush;
	std::cout << Book[num].GetnickName() << std::endl;
	std::cout << "PhoneNumber: " << std::flush;
	std::cout << Book[num].GetphoneNumber() << std::endl;
	std::cout << "DarkestSecret: " << std::flush;
	std::cout << Book[num].GetdarkestSecret() << std::endl; 
}
