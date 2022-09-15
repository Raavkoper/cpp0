#include <iostream>
#include <iomanip>

class Contact {
private:
	std::string fname;
	std::string lname;
	std::string nname;
	std::string phone;
	std::string secret;

public:

	Contact() {
		fname = "* EMPTY *";
	}

	void	init() {
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

	void	show_names() {
		std::cout << std::setw(10) << fname << '|';
		std::cout << std::setw(10) << lname << '|';
		std::cout << std::setw(10) << nname << '|';
	}

	void	view_contact() {
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
};