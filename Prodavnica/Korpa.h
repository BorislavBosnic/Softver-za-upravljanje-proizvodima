#pragma once
#include "Artikal.h"
#include <string>

class Korpa
{
public:
	Korpa();
	Korpa(Artikal*, int);
	Korpa(const Korpa&);
	~Korpa();

	bool operator+=(const Artikal&);
private:
	Artikal *korpa;
	int n;
	void realloc();
};

