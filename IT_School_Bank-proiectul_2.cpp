#include "Banca.h"
#include "Cont_Bancar.h"

int main()
{
	Banca* ing = new Banca();

	bool executie = true;

	do {
		system("cls");

		std::cout << "Meniul principal \n";

		std::cout << "Pentru crearea unui cont apasati tasta 1 \n";
		std::cout << "Pentru vizualizarea conturilor apasati tasta 2 \n";
		std::cout << "Pentru a modifica un cont apasati tasta 3 \n";
		std::cout << "Pentru a iesi din orice optiune apasati tasta 9 \n";

		std::cout << "Alegeti una dintre aceste optiuni: ";
		char optiune;
		std::cin >> optiune;

		switch (optiune)
		{
		case '1':
			system("cls");//functie care curata ecranul consolei la selectarea unei optiuni
			ing->adauga_cont();
			break;
		case '2':
			system("cls");
			ing->vizualizare_conturi();
			break;
		case '3':
			system("cls");
			ing->modificare_cont();
			break;
		case '9':
			std::cout << "Multumim te mai asteptam! \n";
			executie = false;
			break;
		default:
			system("cls");
			std::cout << "Optiunea selectata de dumneavoastra nu exista! \n";
			break;
		}

	} while (executie == true);

	delete ing;


	return 0;
}

