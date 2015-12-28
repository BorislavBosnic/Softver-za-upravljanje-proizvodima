#include "stdafx.h"
#include "Korisnik.h"


Korisnik::Korisnik(std::string im, std::string prm, std::string matbr, std::string usr, std::string sifra)
{
	ime = im;
	prezime = prm;
	jmbg = matbr;
	username = usr;
	password = sifra;
}


Korisnik::~Korisnik()
{
}
