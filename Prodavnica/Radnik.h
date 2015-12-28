#pragma once
#include "Korisnik.h"

class Radnik: virtual public Korisnik
{
public:
	Radnik(std::string = "", std::string = "", std::string = "", std::string = "", std::string = "");
	~Radnik();
	bool logIn();
	void print();
	void read();
private:
	int flag;
};

