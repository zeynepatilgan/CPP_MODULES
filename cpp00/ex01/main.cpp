#include "PhoneBook.hpp"

void	print_title(void)
{
	std::cout << "---------------------" << std::endl;
	std::cout << "|     PhoneBook     |" << std::endl;
	std::cout << "---------------------" << std::endl;
	std::cout << "| 'ADD'    Command  |" << std::endl;
	std::cout << "| 'SEARCH' Command  |" << std::endl;
	std::cout << "| 'EXIT'   Command  |" << std::endl;
	std::cout << "---------------------" << std::endl;
}

int main(void)
{
	std::string	line;
	PhoneBook	_phonebook;

	print_title();
	while (true)
	{
		std::cout << "Enter Command > ";
		std::getline(std::cin, line);
		 if (std::cin.fail())
        {
            std::cin.clear();
            break;
        }
		if (line == "EXIT" or line == "exit")
			break;
		if (line == "ADD" or line == "add")
		{
			if (!_phonebook.PhoneBookAdd())
				return (std::cout << "Error!" << std::endl, -1);
		}
		if (line == "SEARCH" or line == "search")
		{
			if (!_phonebook.PhoneBookSearch())
				return (std::cout << "Error!" << std::endl, -1);
		}
	}
	return (0);
}
