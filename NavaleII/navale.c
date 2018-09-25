#include <stdio.h>
#include "navale.h"
//□

int affichage(char** tab, char** tab2)
{
	printf("  ");
	for (int i = 1; i <= 10; i++){
		printf("%i ",i);
	}
	printf("\t\t  ");
	for (int i = 1; i <= 10; i++){
		printf("%i ",i);
	}
	printf("\n");
	for (int i = 0; i < 10; i++){
		printf("%c ", i+65);
		for (int j = 0; j < 10; j++){
			printf("%c ",tab[i][j]);
			
		}
		printf("\t\t");
		printf("%c ", i+65);
		for (int j = 0; j < 10; j++){
			printf("%c ",tab2[i][j]);
			
		}
		printf("\n");	
		
	}
	return 0;
} 


