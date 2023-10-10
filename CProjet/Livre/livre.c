#include<stdio.h>
#include "../Editeur/editeur.h"
#define _CRT_secure_no_warnings

struct livre {
	int id;
	char titre[250];
	char datePublication[10];
	double prix;
	//struct Editeurs[];
	//struct Auteurs[];
};

int printStructLivre(struct livre l) {
	return (l.id);
}

void displayHeaderTab() {
	printf("|ID |Titre     |Date de Publication |Prix| \n");
}

void list() {

	struct livre tab[20];

	struct livre l1 = { 0,"Candide","2017",3.50 };
	struct livre l2 = { 1,"L'Etranger","2002",2.50 };
	struct livre l3 = { 2,"La Peste","2002",6.76 };
	struct livre l4 = { 3,"Les Misérables","21/11/2019",4.80};
	struct livre l5 = { 4,"David Copperfield","13/08/2020",7.90 };

	tab[0] = l1;
	tab[1] = l2;
	tab[2] = l3;
	tab[3] = l4;
	tab[4] = l5;

	for (int i = 1; i < sizeof(tab); i++)
	{
		printf("|%d", tab[i].id);
		printf("  |%s", tab[i].titre);
		printf("                |%s", tab[i].datePublication);
		printf("                |%g", tab[i].prix);
		printf(" |\n");
	}
	
	
}