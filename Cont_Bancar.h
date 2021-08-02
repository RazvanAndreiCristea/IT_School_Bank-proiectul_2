#pragma once
#include <iostream>
#include <string>

enum class Tip_cont // am creat o enumeratie care are specificatorul de acces pe public (default)!!!!
{
	CONT_RON,
	CONT_EURO,
	CONT_DOLAR
};

class Cont_Bancar // clasa conturilor bancare
{
	std::string nume;
	std::string prenume;
	int sold;
	Tip_cont e_tip_cont;
	std::string IBAN;

public:
	Cont_Bancar(std::string nume, std::string prenume, std::string IBAN);

	std::string get_nume() { return nume; }
	std::string get_prenume() { return prenume; }
	int get_sold() { return sold; }
	std::string get_IBAN() { return IBAN; }
	void set_sold(int value) { sold = value; }

	~Cont_Bancar();

};

