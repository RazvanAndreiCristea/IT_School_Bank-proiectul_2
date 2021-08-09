#include "Cont_Bancar.h"

Cont_Bancar::Cont_Bancar(std::string nume, std::string prenume, std::string IBAN)
{
	this->nume = nume; 
	this->prenume = prenume;
	this->IBAN = IBAN;
	sold = 0;
	e_tip_cont = Tip_cont::CONT_RON;
}
/* this este un pointer care anuleaza ambiguitatea intre un camp al unei
clase si parametrul unui constructor care sunt de acelasi tip si denumire*/
