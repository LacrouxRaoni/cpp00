class ContactEntity
{
	private:
		char *firstName;
		char *lastName;
		char *nickname;
		char *phoneNumber;
		char *darkestSecret;


	public:
	ContactEntity()
	{
	}

	ContactEntity(char *firstName,
								 char *lastName,
								 char *nickname,
								 char *phoneNumber,
								 char *darkestSecret)
	{
		this->firstName = firstName;
		this->lastName = lastName;
		this->nickname = nickname;
		this->phoneNumber = phoneNumber;
		this->darkestSecret = darkestSecret;
	}

	~ContactEntity()
	{
	}

	char *getFirstName(){
		return firstName;
	}

	char *getLastName(){
		return lastName;
	}

	char *getNickname(){
		return nickname;
	}

	char *getPhoneNumber(){
		return phoneNumber;
	}

	char *getDarkestSecret(){
		return darkestSecret;
	}

};


