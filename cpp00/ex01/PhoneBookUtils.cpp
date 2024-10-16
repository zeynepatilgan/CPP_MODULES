#include "PhoneBookUtils.hpp"

std::string	myGetLine(std::string string, bool isTel)
{
	std::string line;
	while (true)
	{
		std::cout << string;
		std::getline(std::cin, line);
		if (std::cin.fail())
        {
            std::cin.clear(); // Hata bayraklarını temizle
            break;
        }
		if (line.empty())
			continue;
		
		if (line == "exit" or line == "EXIT")
			break;
		if (isTel == false)
			break;
		if (isTel == true and isDigit(line))
			break;
	}
	return (line);
}

std::string	length_control(std::string string)
{
	if (string.length() > 10)
		string = string.substr(0, 9) + '.';
	return (string);
}

bool	isDigit(std::string line)
{
	if (line.empty())
		return (false);
	for (size_t i = 0; i < line.length(); i++)
	{
		if (!(line[i] >= '0' && line[i] <= '9'))
			return (false);
	}
	return (true);
}
