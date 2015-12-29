#include "stdafx.h"
#include "Artikal.h"


Artikal::Artikal(int s, std::string ime, std::string mjera, double c, double d)
{
	sifra = s;
	naziv = ime;
	jedinica = mjera;
	cijena = c;
	kol = d;
}

bool Artikal::operator==(const Artikal& a)
{
	if (naziv == a.naziv)
		return true;
	else
		return false;
}

std::istream &operator>>(std::istream &utok, Artikal& a)
{
	do {
		std::cout << "\tSifra:     ";
		utok >> a.sifra;
	} while (a.sifra < 0 || a.sifra>99999);
	std::cout << "\tNaziv:     ";
	utok >> a.naziv;
	std::cout << "\tJed mjere: ";
	utok >> a.jedinica;
	std::cout << "\tCijena:    ";
	utok>> a.cijena;
	std::cout << "\tKolicina:  ";
	return utok;
}

std::ostream &operator<<(std::ostream &itok, const Artikal& a)
{
	itok << std::setw(5) << std::setfill('0') << a.sifra << std::setw(20) << a.naziv 
		<<std::fixed<<std::setprecision(2)<< a.cijena << " KM " 
		<< std::fixed << std::setprecision(2)<< a.kol <<" "<< a.jedinica << a();
	return itok;
}

Artikal& Artikal::operator=(const Artikal &a)
{
	if (this == &a)
		return *this;
	(*this).naziv = a.naziv;
	(*this).jedinica = a.jedinica;
	(*this).cijena = a.cijena;
	(*this).kol = a.kol;
	(*this).sifra = a.sifra;
	return *this;
}

double Artikal::getCijena() const
{
	return cijena;
}

double Artikal::getKol() const
{
	return kol;
}

double Artikal::operator()() const
{
	return cijena*kol;
}

bool Artikal::operator+=(double kolicina)
{
	kol += kolicina;
	if (kol < 0)
		return false;
	return true;
}
