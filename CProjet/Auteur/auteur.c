#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct auteur {
	int id;
	char nom[50];
	char prenom[50];
	char dateNaissance[6];
	char dateDeces[6];
};

struct auteur tab[50];
int lengthTab = 6;

int id;
char nom[50];
char prenom[50];
char dateNaissance[6];
char dateDeces[6];

void displayHeaderTabAuteur() {
	printf("lengthTab: %d", lengthTab);
	printf("\n|ID |Nom      | Prenom      |Date de Naissance      |Date deces | \n");
}

void listAuteur() {

	struct auteur a1 = { 0,"Victor","Hugo","1802","1885"};
	struct auteur a2 = { 1,"Charles","Baudelaire","1821","1867"};
	struct auteur a3 = { 2,"Albert","Camus","1913","1960"};
	struct auteur a4 = { 3,"Charles","Dikens","1812","1870"};
	struct auteur a5 = { 4,"","Voltaire","1694","1778" };
	struct auteur a6 = { 5,"","test","1999","2021"};

	tab[0] = a1;
	tab[1] = a2;
	tab[2] = a3;
	tab[3] = a4;
	tab[4] = a5;
	tab[5] = a6;

	//printf("taille tableau avant ajout: %d", lengthTab);

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

void ajouterAuteur() {

	printf("Nom: ");
	scanf("%s",&nom);

	printf("\nPrenom: ");
	scanf("%s", &prenom);

	printf("\nDate de naissance: ");
	scanf("%s", &dateNaissance);

	printf("\nDate de deces: ");
	scanf("%s", &dateDeces);

	struct auteur nouvelAuteur;
	nouvelAuteur.id = lengthTab;
	strncpy(nouvelAuteur.nom, nom, sizeof(nouvelAuteur.nom));
	strncpy(nouvelAuteur.prenom, prenom, sizeof(nouvelAuteur.prenom));
	strncpy(nouvelAuteur.dateNaissance, dateNaissance, sizeof(nouvelAuteur.dateNaissance));
	strncpy(nouvelAuteur.dateDeces, dateDeces, sizeof(nouvelAuteur.dateDeces));

	// Ajoutez le nouvel auteur au tableau existant
	if (lengthTab < 50) {
		tab[lengthTab] = nouvelAuteur;
		lengthTab++;

		printf("\nAuteur ajoute avec succes.\n");
	}
	else {
		printf("\nLe tableau est plein. Impossible d'ajouter plus d'auteurs.\n");
	}
	//printf("taille tableau apres ajout: %d", lengthTab);

	listAuteur();
}

void modifierAuteur() {

	printf("Nom: ");
	scanf("%s", &nom);

	printf("\nPrenom: ");
	scanf("%s", &prenom);

	printf("\nDate de naissance: ");
	scanf("%s", &dateNaissance);

	printf("\nDate de deces: ");
	scanf("%s", &dateDeces);

	struct auteur nouvelAuteur;
	nouvelAuteur.id = lengthTab;
	strncpy(nouvelAuteur.nom, nom, sizeof(nouvelAuteur.nom));
	strncpy(nouvelAuteur.prenom, prenom, sizeof(nouvelAuteur.prenom));
	strncpy(nouvelAuteur.dateNaissance, dateNaissance, sizeof(nouvelAuteur.dateNaissance));
	strncpy(nouvelAuteur.dateDeces, dateDeces, sizeof(nouvelAuteur.dateDeces));

	// Ajoutez le nouvel auteur au tableau existant
	if (lengthTab < 50) {
		tab[lengthTab] = nouvelAuteur;
		lengthTab++;

		printf("\nAuteur ajoute avec succes.\n");
	}
	else {
		printf("\nLe tableau est plein. Impossible d'ajouter plus d'auteurs.\n");
	}
	//printf("taille tableau apres ajout: %d", lengthTab);

	listAuteur();
}