#include <iostream>

static void displayMenu()
{
	std::cout << "Please Select: \n";
	std::cout << "1: ADD \n";
	std::cout << "2: SEARCH \n";
	std::cout << "0: EXIT \n";
	std::cout << "Option: ";
}

int main(void)
{
	char i; 
	std::cout << "WELCOME TO MY AWEASOME PHONEBOOK!" << std::endl;
	while (true)
	{
		displayMenu();

		
		std::cin.get(i);
		if (i == '0')
			break ;
	}

}
