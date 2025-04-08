#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
	std::ifstream ifs;
	std::ofstream ofs;
	std::string original;
	std::string filename(av[1]);
	std::string readText(av[2]);
	std::string changeText(av[3]);

	if (ac != 4)
	{
		std::cout << "ERROR" << std::endl;
		return -1;
	}
	if (readText.length() == 0 || changeText.length() == 0)
	{
		std::cout << "ERROR" << std::endl;
		return -1;
	}
	ifs.open(av[1]);

	if (ifs.fail())
	{
		std::cout << "파일을 찾을 수 없습니다!" << std::endl;
		return -1;
	}

	filename.append(".replace");
	ofs.open(filename.c_str());

	if (ofs.fail())
	{
		std::cout << "파일을 찾을 수 없습니다!" << std::endl;
		ifs.close();
		return -1;
	}

	while (std::getline(ifs, original))
	{
		size_t pos = 0;
		while ((pos = original.find(readText, pos)) != std::string::npos)
		{
			original.erase(pos, readText.length());
			original.insert(pos, changeText);
			pos += changeText.length();
		}
		ofs << original;
		if (!ifs.eof())
			ofs << std::endl;
	}
	ifs.close();
	ofs.close();
	return 0;
}