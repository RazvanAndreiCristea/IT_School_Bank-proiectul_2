#include "Banca.h"

std::string Banca::creaza_IBAN()
{
	std::string IBAN;
	return IBAN;
}

Banca::Banca()
{

}

void Banca::adauga_cont()
{
	std::cin.ignore();

	system("cls");
	std::string nume, prenume;

	std::cout << "Introduceti numele utilizatorului: ";
	std::getline(std::cin, nume);

	std::cout << "Introduceti prenumele uitilizatorului: ";
	std::getline(std::cin, prenume);

	std::string iban = creaza_IBAN();
	Cont_Bancar* cont = new Cont_Bancar(nume, prenume, iban);

	conturi_bancare.push_back(cont);

	std::cout << "Pentru crearea unui cont apasati tasta 1. \n";
	std::cout << "Pentru meniul principal apasati orice tasta cu exceptia tastei 1.  \n";

	char optiune;
	std::cin >> optiune;
	switch (optiune)
	{
	case '1':
		adauga_cont();
		break;

	default:
		break;
	}
}

void Banca::vizualizare_conturi()
{
	int j;
	std::cout << "Numarul de conturi din banca este: " << conturi_bancare.size() << "\n";

	for (j = 0; j < conturi_bancare.size(); j++)
	{
		std::cout << "Contul " << j + 1 << ": \n";
		std::cout << conturi_bancare[j]->get_nume() << "\n";
		std::cout << conturi_bancare[j]->get_prenume() << "\n";
	}

	std::cout << "Pentru crearea unui cont apasati tasta 1. \n";
	std::cout << "Pentru meniul principal apasati orice tasta cu exceptia tastei 1.  \n";

	char optiune;
	std::cin >> optiune;
	switch (optiune)
	{
	case '1':
		system("CLS");
		adauga_cont();
		break;
	default:
		break;
	}
}

void Banca::modificare_cont()
{
	std::cin.ignore();

	std::cout << "Introduceti numele si prenumele contului dumneavoastra! \n";

	std::string nume;
	std::cout << "Introduceti numele de familie: ";
	std::getline(std::cin, nume);

	std::string prenume;
	std::cout << "Introduceti prenumele : ";
	std::getline(std::cin, prenume);


	Cont_Bancar* auxiliar = nullptr;

	std::vector <Cont_Bancar*>::iterator jt;

	for (jt = conturi_bancare.begin(); jt != conturi_bancare.end(); jt++)
	{
		if (nume == (*jt)->get_nume() && prenume == (*jt)->get_prenume())
		{
			auxiliar = *jt;
			break;
		}
	}

	if (auxiliar == nullptr)
	{
		std::cout << "Contul nu este creat \n";
		std::cout << "1 -> Creati un cont \n";
		std::cout << "2 -> Intoarcere la meniul principal \n";
		std::cout << "3 -> Cautati un alt cont \n";

		char optiune;
		std::cin >> optiune;

		switch (optiune)
		{
		case '1':
			system("CLS");
			adauga_cont();
			break;
		case '2':
			std::cout << "Going back \n";
			break;
		case '3':
			system("CLS");
			modificare_cont();
		default:
			break;
		}
	}

	else
	{
		std::cout << "Ce modificari doriti sa faceti \n";
		std::cout << "1 -> Stergeti contul \n";
		conturi_bancare.erase(jt);
	}

	system("pause");
}

Banca::~Banca()
{
	conturi_bancare.clear();
}
