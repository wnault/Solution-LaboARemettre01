// But : Écrire un programme qui lit un entier et qui détermine et affiche
// s'il sagit d'un entier ou pair d'un entier impair.
// Auteur : William Nault
// Date : 2021-09-01

#include<iostream>
using namespace std;

int main()
{
	int nb1;
	int nb2;
	int res;

	setlocale(LC_ALL, "");
	
	std::cout << "Entrer un nombre entier :";
	std::cin >> nb1;


	if (nb1 % 2 == 0)
		cout << nb1 << " est un nombre pair.";
	else
		cout << nb1 << " est un nombre impair.";

	return 0;


	
	//509212 (509212 est un nombre pair), 000000 (0 est un nombre pair),00000000001 (1 est un nombre impair)
}