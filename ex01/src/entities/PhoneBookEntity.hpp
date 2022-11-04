#ifndef PHONEBOOKENTITY_HPP
#define PHONEBOOKENTITY_HPP

#include <iostream>
#include "ContactEntity.hpp"
#include "PhoneBookEntity.hpp"

class PhoneBookEntity
{
	private:
		static ContactEntity phonebook[8];
		static int index;
	public:
		PhoneBookEntity();
		~PhoneBookEntity();


	void saveContact(ContactEntity contact);

	void printList(void);
	
	void printContactData(int index);
};
#endif