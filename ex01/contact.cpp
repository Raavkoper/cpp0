#include "contact.hpp"

Contact::Contact() {
	fname = "* EMPTY *";
	lname = "* EMPTY *";
	nname = "* EMPTY *";
}

void	Contact::init() {
	std::cout << "First name?..." << std::endl;
	std::getline(std::cin, fname);
	std::cout << "Last one?..." << std::endl;
	std::getline(std::cin, lname);
	std::cout << "Nickname?..." << std::endl;
	std::getline(std::cin, nname);
	std::cout << "Numero de telefono..." << std::endl;
	std::getline(std::cin, phone);
	std::cout << "Your darkest secret..." << std::endl;
	std::getline(std::cin, secret);
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
	std::cout << fname << ',';
	std::cout << std::setw(10) << lname << ',';
	std::cout << std::setw(10) << nname << ',';
	std::cout << std::setw(10) << phone << std::endl;
	std::cout << "Secret" << ": " << std::setw(10) << secret << std::endl;
}