#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "../Bdd/laBdd.h"

void start() {
	int nav;
	int action;
	char choixNav[20];
	int valide = 0;
	while (valide == 0) {

		printf("Consulter la liste des Auteurs, Editeurs ou Livres de la librairie ?\n");
		printf("Auteurs = 1\nEditeurs = 2 \nLivres = 3 \n\n");
		scanf("%d", &nav);
		//printf("input: %d\n", num);
		connexion(nav);
		if (nav == 1) {
			strcpy(choixNav, "auteur");
		}
		else if (nav == 2) {
			strcpy(choixNav, "editeur");
		}
		else if (nav == 3) {
			strcpy(choixNav, "livre");
		}
		else {
			valide = 0;
		}

		valide = nav;
	}

	printf("\nChoisissez une actions !!\n\n");
	printf("Ajouter (Ajouter = 1) un %s \n", choixNav);
	printf("Modifier (Modifier = 2) un %s \n", choixNav);
	printf("Supprimer (Supprimer = 3) un %s \n",choixNav);
	scanf("%d", &action);
	if (action == 1) {
		if (nav == 1) {
			ajouterAuteur();
		}
		else if (nav == 2) {
			ajouterEditeur();
		}
		else if (nav == 3) {
			ajouterLivre();
		}
	}
	else if (action == 2) {
		//ajouterEditeur();
	}
	else if (action == 3) {
		//ajouterLivre();
	}


}