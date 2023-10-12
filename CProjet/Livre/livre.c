#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct livre {
	int id;
	char titre[250];
	char datePublication[12];
	double prix;
	//struct Editeurs[];
	//struct Auteurs[];
};

struct livre tab[50];
int lengthTabLivre = 5;

int id;
char titre[250];
char datePublication[12];
double prix;

void displayHeaderTabLivre() {
	printf("|ID |Titre              |Date de Publication |Prix| \n");
}

void listLivre() {

	struct livre l1 = { 0,"Candide","2017",3.50 };
	struct livre l2 = { 1,"L'Etranger","2002",2.50 };
	struct livre l3 = { 2,"La Peste","2002",6.76 };
	struct livre l4 = { 3,"Les Miserables","21/11/2019",4.80};
	struct livre l5 = { 4,"David Copperfield","13/08/2020",7.90 };

	tab[0] = l1;
	tab[1] = l2;
	tab[2] = l3;
	tab[3] = l4;
	tab[4] = l5;

	for (int i = 0; i < lengthTabLivre; i++)
	{
		printf("|%d", tab[i].id);
		printf("  |%s", tab[i].titre);
		printf("           |%s", tab[i].datePublication);
		printf("                |%lf", tab[i].prix);
		printf(" |\n");
	}
	
	
}

void ajouterLivre() {

	printf("Titre: ");
	scanf("%s", &titre);

	printf("\nDate de Publication: ");
	scanf("%s", &datePublication);

	printf("\nPrix: ");
	scanf("%lf", &prix);


	struct livre nouveauLivre;
	nouveauLivre.id = lengthTabLivre;
	strncpy(nouveauLivre.titre, titre, sizeof(nouveauLivre.titre));
	strncpy(nouveauLivre.datePublication, datePublication, sizeof(nouveauLivre.datePublication));
	nouveauLivre.prix = prix;

	// Ajoutez le nouvel auteur au tableau existant
	//printf("taille: %d", lengthTabLivre);
	if (lengthTabLivre < 50) {
		tab[lengthTabLivre] = nouveauLivre;
		lengthTabLivre++;

		printf("\nAuteur ajoute avec succes.\n");
	}
	else {
		printf("\nLe tableau est plein. Impossible d'ajouter plus d'auteurs.\n");
	}
	//printf("taille tableau apres ajout: %d", lengthTab);

	listLivre();
}
