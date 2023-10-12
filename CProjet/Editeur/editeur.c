#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct editeur {
	int id;
	char nom[50];
	//struct Auteurs[];
	//struct Livres[];
};

struct editeur tab[50];
int lengthTabEditeur = 5;

int id;
char nom[50];


void displayHeaderTabEditeur() {
	printf("|ID |Nom           | \n");
}

void listEditeur() {

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


	for (int i = 0; i < lengthTabEditeur; i++)
	{
		printf("|%d", tab[i].id);
		printf("  |%s", tab[i].nom);
		printf("     |\n");
	}
}

void ajouterEditeur() {

	printf("Nom: ");
	scanf("%s", &nom);

	struct editeur nouvelEdteur;
	nouvelEdteur.id = lengthTabEditeur;
	strncpy(nouvelEdteur.nom, nom, sizeof(nouvelEdteur.nom));
	

	// Ajoutez le nouvel auteur au tableau existant
	if (lengthTabEditeur < 50) {
		tab[lengthTabEditeur] = nouvelEdteur;
		lengthTabEditeur++;

		printf("\nEditeur ajoute avec succes.\n");
	}
	else {
		printf("\nLe tableau est plein. Impossible d'ajouter plus d'editeurs.\n");
	}
	//printf("taille tableau apres ajout: %d", lengthTab);

	listEditeur();
}

//void modifierAuteur() {
//
//	printf("Nom: ");
//	scanf("%s", &nom);
//
//	printf("\nPrenom: ");
//	scanf("%s", &prenom);
//
//	printf("\nDate de naissance: ");
//	scanf("%s", &dateNaissance);
//
//	printf("\nDate de deces: ");
//	scanf("%s", &dateDeces);
//
//	struct editeur nouvelEditeur;
//	nouvelEditeur.id = lengthTab;
//	strncpy(nouvelEditeur.nom, nom, sizeof(nouvelEditeur.nom));
//	strncpy(nouvelEditeur.prenom, prenom, sizeof(nouvelAuteur.prenom));
//	
//
//	// Ajoutez le nouvel auteur au tableau existant
//	if (lengthTab < 50) {
//		tab[lengthTab] = nouvelAuteur;
//		lengthTab++;
//
//		printf("\nAuteur ajoute avec succes.\n");
//	}
//	else {
//		printf("\nLe tableau est plein. Impossible d'ajouter plus d'auteurs.\n");
//	}
//	//printf("taille tableau apres ajout: %d", lengthTab);
//
//	listEditeur();
//}