#include "Korisnik.h"
#include <iostream>
#include <string>

class Admin: virtual public Korisnik
{
public:
	Admin(std::string = "", std::string = "", std::string = "", std::string = "", std::string = "");
	~Admin();
	bool logIn();
	void print();
	void read();
private:
	int flag;
};
