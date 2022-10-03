#include "phonebook.hpp"

int main(int argc, char **argv)
{
	PhoneBook phonebook;
	std::string command;
	int i = 0;

	if (argc != 1 && !argv[1]) {
		std::cout << "Not in the mood for arguments rn (ง'̀-'́)ง" << std::endl;
		return (0);
	}
	std::cout << "Hola :)\nYou may ADD, SEARCH or EXIT!" << std::endl;
	while (1) {
		std::cin >> command;
		if (command == "ADD") {
			phonebook.add(i);
			i++;
			i %= 8;
		}
		else if (command == "SEARCH") {
			std::cout << "Index      First       Last       Nick" << std::endl;
			phonebook.view();
			phonebook.search();
		}
		else if (command == "EXIT") {
			std::cout << "I had a great time.. haha..🥺" << std::endl;
			return (0);
		}
		std::cout << "options havent changed; ADD, SEARCH, EXIT.:)" << std::endl;
		command = "NULL";
	}
}