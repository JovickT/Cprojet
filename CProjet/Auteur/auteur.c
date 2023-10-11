#include<stdio.h>
#define _CRT_secure_no_warnings

struct auteur {
	int id;
	char nom[50];
	char prenom[50];
	char dateNaissance[6];
	char dateDeces[6];
	//struct Editeurs[];
	//struct Livres[];

};

void displayHeaderTabAuteur() {
	printf("|ID |Nom      | Prenom      |Date de Naissance      |Date deces | \n");
}

void listAuteur() {
	struct auteur tab[20];

	struct auteur a1 = { 0,"Victor","Hugo","1802","1885"};
	struct auteur a2 = { 1,"Charles","Baudelaire","1821","1867"};
	struct auteur a3 = { 2,"Albert","Camus","1913","1960"};
	struct auteur a4 = { 3,"Charles","Dikens","1812","1870"};
	struct auteur a5 = { 4,"","Voltaire","1694","1778"};

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
		printf("      |%s", tab[i].prenom);
		printf("                |%s", tab[i].dateNaissance);
		printf("                |%s", tab[i].dateDeces);
		printf("|\n");
	}
}