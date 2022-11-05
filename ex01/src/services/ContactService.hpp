#ifndef CONTACTSERVICE_HPP
#define CONTACTSERVICE_HPP

#include <iostream>
#include "../entities/ContactEntity.hpp"
#include "../entities/PhoneBookEntity.hpp"

class ContactService
{
	private:
		static bool checkIfIsBlank(std::string fName,
					   			   std::string lName,
					   			   std::string nickName,
					   			   std::string phoneNumber,
					   			   std::string darkestSecret);
		static bool checkIfIsAlphaNum(std::string word);
		static bool validPhoneNumber(std::string phoneNumber);
		static bool validation(std::string fName,
					   		   std::string lName,
					   		   std::string nickName,
					   		   std::string phoneNumber,
					   		   std::string darkestSecret);
	public:
		static void addContact();
};

#endif