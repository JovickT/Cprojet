#include<stdio.h>

#define _CRT_secure_no_warnings

struct editeur {
	int id;
	char nom[50];
	//struct Auteurs[];
	//struct Livres[];
};

void displayHeaderTabEditeur() {
	printf("|ID |Nom           | \n");
}

void listEditeur() {
	struct editeur tab[20];

	struct editeur a1 = { 0,"Gallimard" };
	struct editeur a2 = { 1,"Flammarion" };
	struct editeur a3 = { 2,"Hachette"};
	struct editeur a4 = { 3,"Baudelaire"};
	struct editeur a5 = { 4,"Minuit",};

	tab[0] = a1;
	tab[1] = a2;
	tab[2] = a3;
	tab[3] = a4;
	tab[4] = a5;

	int lengthTab = 5;

	for (int i = 0; i < lengthTab; i++)
	{
		printf("|%d", tab[i].id);
		printf("  |%s", tab[i].nom);
		printf("     |\n");
	}
}