#include "PhoneBookService.hpp"

PhoneBookService::PhoneBookService(){
};

PhoneBookService::~PhoneBookService(){
};

void PhoneBookService::searchOption(){

	PhoneBookEntity contacts;
	int index;

	std::cout << "\nSEARCH OPTION\n" <<std::endl;
	contacts.printList();
	std::cout << "\nChoose contact by index: ";
	std::cin >> index;
	if (index < 1 || index > 8)
		std::cout << "\nInvalid Index\n" << std::endl;
	else
		contacts.printContactData(index);
}