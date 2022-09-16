#include <iostream>
#include <string>
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
	std::string	truncate(std::string s1);
	void	show_names();
	void	view_contact();
};