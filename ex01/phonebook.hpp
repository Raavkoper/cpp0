#include "contact.hpp"

class PhoneBook {
private:
	Contact		contacts[8];

public:
	void	add(int i);
	void	view();
	void	search();
};