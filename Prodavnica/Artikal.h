#pragma once
#include <iostream>
#include <string>
#include <functional>
#include <algorithm>
#include <iomanip>

class Artikal
{
public:
	Artikal(int = 0, std::string = "?", std::string = "?", double = 0, double = 0);

	bool operator==(const Artikal&);
	Artikal& operator=(const Artikal &);
	double getCijena() const;
	double getKol() const;
	double operator()() const;
	bool operator+=(double);

	friend std::istream &operator>>(std::istream &utok, Artikal&);
	friend std::ostream &operator<<(std::ostream &itok, const Artikal&);

protected:
	int sifra;
	std::string naziv, jedinica;
	double cijena, kol;
};

