#include "ContactService.hpp"

static bool validation(std::string fName,
					   std::string lName,
					   std::string nickName,
					   std::string phoneNumber,
					   std::string darkestSecret)
{
	if(fName.empty()){
		std::cout << "Fist Name can't be blank";
		return false;
	} else if (lName.empty()) {
		std::cout << "Last Name can't be blank";
		return false;
	} else if (nickName.empty()) {
		std::cout << "Nickname can't be blank";
		return false;
	} else if (phoneNumber.empty()) {
		std::cout << "Phone Number can't be blank";
		return false;
	} else if (darkestSecret.empty()) {
		std::cout << "Darkest secret can't be blank";
		return false;
	}
	return true;
}

static bool validPhoneNumber(std::string phoneNumber)
{
	if (phoneNumber.size() > 20) {
		std::cout << "\nPhone number can't have more than 20 characters\n" << std::endl;
	} else {
		size_t i;
		for (i = 0; i < phoneNumber.length(); i++) {
			if (phoneNumber.at(i) < 48 || phoneNumber.at(i) > 57) {
				std::cout << "\nPhone number must have numbers only.\n" << std::endl;
				return false;
			}
		}
	}
	return true;
}

void ContactService::addContact()
{
	ContactEntity contact;
	std::string fName;
	std::string lName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

	std::cout << "\nADD OPTION\n" << std::endl;
	std::cout << "Fist Name: ";
	std::getline(std::cin, fName);
	std::cout << "Last Name: ";
	std::getline(std::cin, lName);
	std::cout << "Nickname: ";
	std::getline(std::cin, nickName);
	std::cout << "Phone Number: ";
	std::getline(std::cin, phoneNumber);
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, darkestSecret);

	if (!validation(fName, lName, nickName, phoneNumber, darkestSecret))
		return ;
	if (!validPhoneNumber(phoneNumber))
		return ;
	
}