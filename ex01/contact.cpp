#include "contact.hpp"

Contact::Contact() {
	fname = "* EMPTY *";
	lname = "* EMPTY *";
	nname = "* EMPTY *";
}

void	Contact::init() {
	std::cout << "First name?..." << std::endl;
	std::getline(std::cin, fname);
	while (fname[0] == '\0') {
		std::cout << "Sorry.. come again?" << std::endl;
		if (!std::getline(std::cin, fname))
			exit(0);
	}
	std::cout << "Last one?..." << std::endl;
	std::getline(std::cin, lname);
	while (lname[0] == '\0') {
		std::cout << "Sorry.. come again?" << std::endl;
		if (!std::getline(std::cin, lname))
			exit(0);
	}
	std::cout << "Nickname?..." << std::endl;
	std::getline(std::cin, nname);
	while (nname[0] == '\0') {
		std::cout << "Sorry.. come again?" << std::endl;
		if (!std::getline(std::cin, nname))
			exit(0);
	}
	std::cout << "Numero de telefono..." << std::endl;
	std::getline(std::cin, phone);
	while (phone[0] == '\0') {
		std::cout << "Sorry.. come again?" << std::endl;
		if (!std::getline(std::cin, phone))
			exit(0);
	}
	std::cout << "Your darkest secret..." << std::endl;
	std::getline(std::cin, secret);
	while (secret[0] == '\0') {
		std::cout << "Sorry.. come again?" << std::endl;
		if (!std::getline(std::cin, secret))
			exit(0);
	}
}

std::string	Contact::truncate(std::string s1) {
	if (s1.length() > 10) {
		s1.resize(9);
		s1.append(".");
	}
	return (s1);
}

void	Contact::show_names() {
	std::cout << std::setw(10) << truncate(fname)<< '|';
	std::cout << std::setw(10) << truncate(lname) << '|';
	std::cout << std::setw(10) << truncate(nname) << '|';
}

void	Contact::view_contact() {
	if (fname == "* EMPTY *") {
		std::cout << std::setw(10) << fname << std::endl;
		return ;
	}
	std::cout << "First      Last      Nick     Phone" << std::endl;
	std::cout << fname << ", ";
	std::cout << std::setw(10) << lname << ", ";
	std::cout << std::setw(10) << nname << ", ";
	std::cout << std::setw(10) << phone << std::endl;
	std::cout << "Secret" << ": " << std::setw(10) << secret << std::endl;
}