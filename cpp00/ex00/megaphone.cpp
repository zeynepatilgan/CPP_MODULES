#include <iostream>

int main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	std::string message;
	for (int i = 1; i < ac; ++i)
	{
		message = av[i];
		for (size_t j = 0; j < message.length(); ++j)
			message[j] = std::toupper(message[j]);
		std::cout << message;
	}
	std::cout << std::endl;
	return (0);
}
