#include <stdio.h>
//□

int affichage(char tab[10][10], char tab2[10][10])
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

int main(){
	char tab[10][10];
	char tab2[10][10];
	for (int i = 0; i < 10; i++){
		for (int j = 0; j < 10; j++){
			tab[i][j] = '~';	
			tab2[i][j] = '~';
		}		
	}
	affichage(tab, tab2);
	
	
	return 0;
}




