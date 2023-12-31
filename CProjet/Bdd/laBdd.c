#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "../Auteur/auteur.h"
#include "../Editeur/editeur.h"
#include "../Livre/livre.h"
#include "../begin/beginning.h"


enum navs {
	auteurs = 1,
	editeurs,
	livres
};

void connexion(int affichage) {

	enum navs choix = affichage;
	//printf("choix %d et affichage %d\n", choix,affichage);
	switch (choix)
	{
		case auteurs:
			displayHeaderTabAuteur();
			listAuteur();
			break;
		case editeurs:
			displayHeaderTabEditeur();
			listEditeur();
			break;
		case livres:
			displayHeaderTabLivre();
			listLivre();
			break;
		default:
			start();
			break;
	}
}