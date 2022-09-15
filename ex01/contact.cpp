#include "contact.hpp"

Contact::Contact() {
	fname = "* EMPTY *";
	lname = "* EMPTY *";
	nname = "* EMPTY *";
}

void	Contact::init() {
	std::cout << "First name?..." << std::endl;
	std::cin >> fname;
	std::cout << "Last one?..." << std::endl;
	std::cin >> lname;
	std::cout << "Nickname?..." << std::endl;
	std::cin >> nname;
	std::cout << "Numero de telefono..." << std::endl;
	std::cin >> phone;
	std::cout << "Your darkest secret..." << std::endl;
	std::cin >> secret;
}

void	Contact::show_names() {
	std::cout << std::setw(10) << fname << '|';
	std::cout << std::setw(10) << lname << '|';
	std::cout << std::setw(10) << nname << '|';
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