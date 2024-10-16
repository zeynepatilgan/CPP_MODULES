#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>

class Contact
{
	private:
		std::string name;
		std::string lname;
		std::string username;
		std::string tel;
		std::string secret;
	public:

		void	setName(std::string name);
		void	setLastname(std::string lname);
		void	setUsername(std::string username);
		void	setTelephoneNumber(std::string tel);
		void	setDarkSecret(std::string secret);

		std::string	getName(void);
		std::string	getLastname(void);
		std::string	getUsername(void);
		std::string	getTelephoneNumber(void);
		std::string	getDarkSecret(void);
};

#endif
