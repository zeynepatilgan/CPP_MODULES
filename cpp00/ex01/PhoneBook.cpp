# include <iomanip>
#include "PhoneBook.hpp"
#include "PhoneBookUtils.hpp"

void	PhoneBook::setContact(const Contact& newContact, int index)
{
	_contact[index] = newContact;
}

bool	PhoneBook::PhoneBookAdd()
{
	static int index = 0;
	std::string	line;

	line = myGetLine("Name > ", false);
	_contact[index % 8].setName(line);

	line = myGetLine("Lastname > ", false);
	_contact[index % 8].setLastname(line);

	line = myGetLine("Username > ", false);
	_contact[index % 8].setUsername(line);

	line = myGetLine("Telephone Number > ", true);
	_contact[index % 8].setTelephoneNumber(line);

	line = myGetLine("Dark Secret > ", false);
	_contact[index % 8].setDarkSecret(line);

	setContact(_contact[index], index);
	index++;
	return (true);
}

bool	PhoneBook::PhoneBookSearch(void)
{
	std::string line;
	int			index;


	if (!searchPrint())
		return (false);
	line = myGetLine("Enter Number > ", true);

	if (line == "EXIT" or line == "exit")
		return (true);

	if (!isDigit(line))
		return (false);
	if (line.length() > 1)
		return (false);
	index = (int)line[0] - 48;
	if (index >= 8)
		return (false);
	if (!_contact[index].getName().empty())
	{
		std::cout << "Name > " << _contact[index].getName() << std::endl;
		std::cout << "Lastname > " << _contact[index].getLastname() << std::endl;
		std::cout << "Username > " << _contact[index].getUsername() << std::endl;
		std::cout << "Telephone Number > " << _contact[index].getTelephoneNumber() << std::endl;
		std::cout << "Dark Secret > " << _contact[index].getDarkSecret() << std::endl;
	}
	else
		PhoneBookSearch();
	return (true);
}


bool	PhoneBook::searchPrint(void)
{
	std::string name;
	std::string lname;
	std::string username;
	if (_contact[0].getName().empty())
		return (false);
	std::cout << "---------------------------------------------" << std::endl;
		std::cout << "|" << std::setw(10) << std::right << "Dizin" << "|"
			<< std::setw(10) << std::right << "Ad" << "|"
				<< std::setw(10) << std::right << "Soyad" << "|"
					<< std::setw(10) << std::right << " Takma Ad |" << std::endl;
						std::cout << "---------------------------------------------" << std::endl;

	for (int i = 0; i < 8; i++)
	{
		if (!_contact[i].getName().empty())
		{
			name = _contact[i].getName();
			lname = _contact[i].getLastname();
			username = _contact[i].getUsername();

			name = length_control(name);
			lname = length_control(lname);
			username = length_control(username);

			std::cout << '|' << std::setw(10) << std::right << i << '|'
				<< std::setw(10) << std::right << name << '|'
					<< std::setw(10) << std::right << lname << '|'
						<< std::setw(10) << std::right <<  username << '|' << std::endl;
			std::cout << "---------------------------------------------" << std::endl;
		}
	}
	return (true);
}
