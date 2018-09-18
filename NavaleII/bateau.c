#include <stdio.h>
#include "main.h"
#include "bateau.h"


int placementJoueur(char tab[10][10], Bateau batJ[5]){
	printf("Placement du porte-avion\n");
	Bateau paJ1;
	batJ[0] = paJ1;
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
	
	return 0;
}