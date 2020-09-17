// But : Écrire un programme qui lit un entier et qui affiche si le nombre est pair ou impair
// Auteur : Arnaud Ouimet
// Date : 2020-09-13

#include <iostream>    // Pour que le programme puisse intéragir avec L'utilisateur cout, cin
using namespace std;

int main()
{
	setlocale(LC_ALL, "");           //Permet de convertir les accents dans la console

	// Déclaration des variables nécessaire au programme
	int entier;


	// Le programme demande un entier a l'utilisateur
	cout << "Veuillez entrer un nombre entier : ";
	cin >> entier;
	

	// FR : Le programme indique si les valeurs sont pair ou impair

	if (entier % 2 == 0) // Si l'entier est divisible par 2, alors l'entier = pair
	{
		cout << entier << " est un nombre pair \n";
	}
	// KM : Pas besoin de refaire un test ici car %2 donne deux réponses possibles seulement (0 et 1) et surtout il manque le % 2
	else if (entier != 0) // Si l'entier n'égale pas la valeur d'en haut, alors l'entier = impair
	{
	    cout << entier << " est un nombre impair \n";
	}
	// Pour repousser le texte Windows qui s'affiche à la fin ( Ça fait plus beau)
	// KM : Effectivement !!!
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
	// KM : Teste aussi des valeurs négatives et 0 !!
	/*
	Entier           Résultat

	  32            32 est un nombre pair
	  23            23 est un nombre impair
	   5             5 est un nombre impair
	   8             8 est un nombre pair
	*/
	



	return 0;
}
