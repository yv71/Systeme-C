#include <stdio.h>
#include "navale.h"
//□

int affichage(char** tab, char** tab2, int nb)
{
	printf("  ");
	for (int i = 1; i <= nb; i++){
		printf("%i ",i);
	}
	printf("\t\t  ");
	for (int i = 1; i <= nb; i++){
		printf("%i ",i);
	}
	printf("\n");
	for (int i = 0; i < nb; i++){
		printf("%c ", i+65);
		for (int j = 0; j < nb; j++){
			printf("%c ",tab[i][j]);
			
		}
		printf("\t\t");
		printf("%c ", i+65);
		for (int j = 0; j < nb; j++){
			printf("%c ",tab2[i][j]);
			
		}
		printf("\n");	
		
	}
	return 0;
} 


