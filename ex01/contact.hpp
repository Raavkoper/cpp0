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
	Contact();
	void	init();
	void	show_names();
	void	view_contact();
};