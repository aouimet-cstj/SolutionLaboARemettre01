// But : �crire un programme qui lit un entier et qui affiche si le nombre est pair ou impair
// Auteur : Arnaud Ouimet
// Date : 2020-09-13

#include <iostream>    // Pour que le programme puisse int�ragir avec L'utilisateur cout, cin
using namespace std;

int main()
{
	setlocale(LC_ALL, "");           //Permet de convertir les accents dans la console

	// D�claration des variables n�cessaire au programme
	int entier;


	// Le programme demande un entier a l'utilisateur
	cout << "Veuillez entrer un nombre entier : ";
	cin >> entier;
	

	// Le programme indique si les valeurs sont pair ou impair

	if (entier % 2 == 0) // Si l'entier est divisible par 2, alors l'entier = pair
	{
		cout << entier << " est un nombre pair \n";
	}

	else if (entier != 0) // Si l'entier n'�gale pas la valeur d'en haut, alors l'entier = impair
	{
	    cout << entier << " est un nombre impair \n";
	}
	// Pour repousser le texte Windows qui s'affiche � la fin ( �a fait plus beau)
	{
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
	}

	// Le plan du test
	/*
	Entier           R�sultat

	  32            32 est un nombre pair
	  23            23 est un nombre impair
	   5             5 est un nombre impair
	   8             8 est un nombre pair
	*/
	



	return 0;
}