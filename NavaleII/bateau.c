#include <stdio.h>
#include "main.h"
#include "bateau.h"


int placementJoueur(char** tab, Bateau* batJ){
	printf("Placement du porte-avion\n");
	batJ[0] = NULL;
	paJ1.nbCases = 5;
	int X = 0;
	while (X<1 || X>10){
		printf("Coordonnée X (chiffre) : ");
		scanf("%d",&X);
		printf("%d\n", X);
		if (X<1 || X>10){
			printf("Rentrez une valeur entre 1 et 10 S.V.P ! Vous avez saisi : %d \n", X);
		}
		else {
			printf("Valeur saisie correct ! Vous avez saisi : %d \n", X);
		}
		paJ1.nbCases = X;
		printf("%d\n", paJ1.nbCases);
	}
	int Y = 0;
	while (Y<1 || Y>10){
		printf("Coordonnée Y (lettre) : ");
		scanf("%d",&Y);
		printf("%d", Y);
		Y = Y - 64;
	}
	return 0;
}