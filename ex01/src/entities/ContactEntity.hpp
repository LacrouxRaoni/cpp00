#ifndef CONTACTENTITY_HPP
#define CONTACTENTITY_HPP

#include <iostream>

class ContactEntity
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;
	
	public:
		ContactEntity();
		ContactEntity(std::string firstName,
					  std::string lastName,
					  std::string nickname,
					  std::string phoneNumber,
					  std::string darkestSecret);
		~ContactEntity();

	std::string getFirstName();

	std::string getLastName();

	std::string getNickname();

	std::string getPhoneNumber();

	std::string getDarkestSecret();

};
#endif
