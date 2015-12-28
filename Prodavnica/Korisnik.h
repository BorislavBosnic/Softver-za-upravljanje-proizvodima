#pragma once
#include <iostream>
#include <string>


class Korisnik
{
public:
	Korisnik(std::string = "", std::string = "", std::string = "", std::string = "", std::string = "");
	virtual ~Korisnik();
	virtual bool logIn() = 0;
	virtual void print() = 0;
	virtual void read() = 0;

protected:
	std::string ime, prezime, jmbg, username, password;
};

