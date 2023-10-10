#include <stdio.h>
#include <string.h>
#include "Livre/livre.h"
#include "Editeur/editeur.h"
#include "Auteur/auteur.h"


/*Application pour libraires qui permettrait aux libraires de consulter, ajouter, modifier et supprimer des livres d'une base de données
* contenant des donnéesd'auteurs, d'éditeurs et de livres.
*/

int main() {
	int tab[20];

	printf("ouverture de l'application \n");
	printf("");
	displayHeaderTab();
	printf("");
	list();

}