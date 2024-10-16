#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	_contact[8];
	public:
		void			setContact(const Contact& newContact, int index);
		bool			PhoneBookAdd(void);
		bool			PhoneBookSearch(void);
		bool			searchPrint(void);
};

#endif
