#pragma once
#include "Cont_Bancar.h"
#include <vector>
#include <iostream>

class Banca
{
	std::vector<Cont_Bancar*> conturi_bancare;
	std::string creaza_IBAN();

public:
	Banca();
	void adauga_cont();
	void vizualizare_conturi();
	void modificare_cont();
	~Banca();
};

