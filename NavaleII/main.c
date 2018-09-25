#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "navale.h"
#include "bateau.h"



int main(int argc, char * argv[]){
	char** j1;
	char** j2;
	int nb = atoi(argv[1]);
	if (argc > 1 && nb < 27 ){		
		j1=calloc(nb, sizeof(*j1)); //La première entrée correspond aux ordonnées (lettres) et la deuxième aux abscisses
		j2=calloc(nb, sizeof(*j2));
		Bateau batJ1[5];
			for (int i = 0; i < nb; i++){
				j1[i]=calloc(nb,sizeof(**j1));
				j2[i]=calloc(nb,sizeof(**j2));
				for (int j = 0; j < nb; j++){
					j1[i][j] = '~';
					j2[i][j] = '~';
				}		
		}
		affichage(j1,j2,nb);
	}
	else {
		char** j1; //La première entrée correspond aux ordonnées (lettres) et la deuxième aux abscisses
		char** j2;
		Bateau batJ1[5];
		int nb=10;
			for (int i = 0; i < 10; i++){
				j1[i]=calloc(nb,sizeof(**j1));
				j2[i]=calloc(nb,sizeof(**j2));
				for (int j = 0; j < 10; j++){
					j1[i][j] = '~';	
					j2[i][j] = '~';
				}		
		}
		affichage(j1,j2,10);
	}

	
	//affichage(j1, j2);
	//placementJoueur(j1, batJ1);
	return 0;
}

