#include <iostream>

void printUpperCase(const char *str)
{
	while (*str){
		std::cout << (char)toupper(*(str++));
	}
}

int main(int argc, char const *argv[])
{
	if (argc == 1){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	} else {
		while (*(++argv)){
			printUpperCase(*argv);
		}
		std::cout << std::endl;
	}
}
