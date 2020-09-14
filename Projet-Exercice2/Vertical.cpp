// But : Écrire un programme qui prend comme entrée un nombre de cinq chiffres ensuite il doit vérifier si le nombre contient bien 5 chiffres et doit afficher chaque chiffre sur diffrente ligne de haut en bas 
// Auteur : Arnaud Ouimet
// Date : 2020-09-13


#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");                 // Pour convertir correctement les accents dans la console

	// Déclaration des variables nécessaire au programme
	int nb1;
	


	// Le programme demande un nombre de cinq chiffres
	cout << "Veuillez entrer un nombre entier de cinq chiffres : ";
	cin >> nb1;
	
	
	// Si l'entier est < 10 000 ou > 99 999, alors on affiche que le nombre ne contient pas cinq chiffres
	if (nb1 < 10000 || nb1 > 99999)
	{
		cout << nb1 << " Ce nombre ne contient pas cinq chiffres ";
	}

	// Si l'entier est > 9 999 ou < que 99 999 le nombre va s'afficher verticalement 
	else if (nb1 > 9999 || nb1 < 99999)
	// Pour séparer les chiffres verticalement 
	{
		cout << nb1 / 10000 << " \n";    
		nb1 = nb1 % 10000;                // On divise la valeur du nb1 par 10000
		cout << nb1 / 1000 << " \n";
		nb1 = nb1 % 1000;                 // On divise la valeur du nb1 par 1000
		cout << nb1 / 100 << " \n";
		nb1 = nb1 % 100;                  // on divise la valeur du nb1 par 100
		cout << nb1 / 10 << " \n";
		nb1 = nb1 % 10;                   // on divise la valeur du nb1 par 10
		cout << nb1 << endl;
		
	}

	_getch();       // commande qui enlève le texte Windows (Ça fait plus beau)

	return 0;

	//plan du test
	/*
	Entier       Résultat

	12345            1
                     2
					 3
					 4
			         5

	40000            4
	                 0
					 0
					 0
					 0

	123456           Ce nombre ne contient pas cinq chiffres
	1234             Ce nombre ne contient pas cinq chiffres
	*/










}