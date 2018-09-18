#include <stdio.h>
#include "main.h"
#include "navale.h"
#include "bateau.h"



int main(){
	char j1[10][10]; //La première entrée correspond aux ordonnées (lettres) et la deuxième aux abscisses
	Bateau batJ1[5];
	char j2[10][10];
		for (int i = 0; i < 10; i++){
			for (int j = 0; j < 10; j++){
				j1[i][j] = '~';	
				j2[i][j] = '~';
			}		
	}
	
	affichage(j1, j2);
	placementJoueur(j1, batJ1);
	return 0;
}

