#include <iostream>

class Contact {
public:
	char fname[10], lname[10], nname[10], phone[10];
	char secret[100];
};

class PhoneBook {
public:
	Contact contacts[8];
};

int main(int argc, char **argv)
{
	PhoneBook phonebook;
	char fname[10], lname[10], nname[10], phone[10];
	char secret[100];
	char command[10];
	int i = 0;

	if (argc != 1) {
		std::cout << "Not in the mood for arguments rn (ง'̀-'́)ง\n";
		argv = NULL;
		return (0);
	}
	std::cout << "Hola :)\nYou may ADD, SEARCH or EXIT!\n";
	while (1) {
		std::cin >> command;
		if (!strcmp(command, "ADD"))
		{
			std::cout << "First name?...\n";
			std::cin >> fname;
			std::cout << "Last one?...\n";
			std::cin >> lname;
			std::cout << "Nickname?...\n";
			std::cin >> nname;
			std::cout << "Numero de telefono...\n";
			std::cin >> phone;
			std::cout << "Your darkest secret...\n";
			std::cin >> secret;
			// phonebook.contacts[i].fname = fname;
			// phonebook.contacts[i].fname = fname;
			// phonebook.contacts[i].lname = lname;
			// phonebook.contacts[i].nname = nname;
			// phonebook.contacts[i].phone = phone;
			// phonebook.contacts[i].secret = secret;
			i++;
			i %= 8;
		}
	}
}