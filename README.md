# CPP Pool 01/10

This is the first project at 42 school where you dive in C++ and OOP in 3 exercises.


## About

This project utilize C++ library and Makefile only.

## Installation

```
git clone https://github.com/LacrouxRaoni/cpp00.git
```

in a folder you want; 

then go tothe exercice folder and type make.

run ```./projectName``` and it's done!


## Exercice 00 - Megaphone
A megaphone which hear a String from command line and return  it in uppercase

type ```./megaphone``` and the string you want then megaphone should return it loudly. If no arguments were sent. The megaphone return a noise message.

## Exercice 01 - My Aweasome PhoneBook
A PhoneBook Application where you can save your contacts and check them later. 

Type ```./myAswasomePhoneBook``` and the application should be launched.

You have 3 options in main Menu:

```
- 1-Add
- 2-Search
- 3-Exit
```

### Selecting 1-Add:
	You can register the contact info. 

```
	- First Name
	- Second Name
	- NickName
	- Phone Number
	- Darkest Secret
```

The fields can't be blank, and the Phone Number should contain numbers only. 

After typing all the info. The data will be saved in the PhoneBook. 

The Phonebook can store max 8 contacts. If you try to add a 9th contact. The 1st contact will be replaced. 

### Selecting 2-Search:
	The application will show all the contacts registered in a list containing index, first name, last Name, nickname. 

	You can select the contact you want the full information selecting by the index. Then, the application show all the data one field by line. 

### Selecting 0-Exit:
	The application ends and all the data are lost. 

