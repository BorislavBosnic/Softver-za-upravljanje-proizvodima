#include "stdafx.h"
#include "Admin.h"



Admin::Admin(std::string im, std::string prm, std::string matbr, std::string usr, std::string sifra): Korisnik(im, prm, matbr, usr, sifra)
{
}


Admin::~Admin()
{
}

bool Admin::logIn()
{
	return false;
}

void Admin::print()
{
}

void Admin::read()
{
}
