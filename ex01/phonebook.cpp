#include "phonebook.hpp"

void	PhoneBook::add(int i) {
	contacts[i].init();
}

void	PhoneBook::view() {
	for (int i = 1; i < 9; i++) {
		std::cout << std::setw(6) << i;
		contacts[i - 1].show_names();
		std::cout << std::endl;
	}
}

void	PhoneBook::search() {
	int i;
	char index[13];
	std::cout << "Who you gonna call..." << std::endl;
	std::cin >> index;
	if (!strcmp(index, "ghostbusters")) {
		std::cout << "                       ---" << std::endl;
		std::cout << "                    -        -- " << std::endl;
		std::cout << "                --( /     \\ )XXXXXXXXXXXXX" << std::endl;
		std::cout << "            --XXX(   O   O  )XXXXXXXXXXXXXXX-" << std::endl;
		std::cout << "           /XXX(       U     )        XXXXXXX\\" << std::endl;
		std::cout << "         /XXXXX(              )--   XXXXXXXXXXX\\" << std::endl;
		std::cout << "        /XXXXX/ (      O     )   XXXXXX   \\XXXXX\\" << std::endl;
		std::cout << "        XXXXX/   /            XXXXXX   \\   \\XXXXX----" << std::endl;
		std::cout << "        XXXXXX  /          XXXXXX         \\  ----  -" << std::endl;
		std::cout << "---     XXX  /          XXXXXX      \\           ---" << std::endl;
		std::cout << "  --  --  /      /\\  XXXXXX            /     ---=" << std::endl;
		std::cout << "    -        /    XXXXXX              '--- XXXXXX" << std::endl;
		std::cout << "      --\\/XXX\\ XXXXXX                      /XXXXX" << std::endl;
		std::cout << "        \\XXXXXXXXX                        /XXXXX/" << std::endl;
		std::cout << "         \\XXXXXX                         /XXXXX/" << std::endl;
		std::cout << "           \\XXXXX--  /                -- XXXX/" << std::endl;
		std::cout << "            --XXXXXXX---------------  XXXXX--" << std::endl;
		std::cout << "              \\XXXXXXXXXXXXXXXXXXXXXXXX-" << std::endl;
		std::cout << "                --XXXXXXXXXXXXXXXXXX-" << std::endl;
		std::cout << "But now forreal..." << std::endl;
		std::cin >> index;
	}
	i = atoi(index);
	if (i >= 1 && i <= 8)
		contacts[i - 1].view_contact();
	else
		std::cout << "Sorry no can't do :(" << std::endl;
}