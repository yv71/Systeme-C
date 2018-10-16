#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#include <fcntl.h>

int main (int argc, char *argv[])
{
	if (argc < 3){
		printf("Il faut un fichier source et un fichier cible !\n");
		return 0;
	}
	
	int f1 = open(argv[1], O_RDWR | O_CREAT | O_APPEND);
	int f2 = open(argv[2], O_RDWR | O_CREAT | O_APPEND);

	if (f1 == -1 || f2 == -1) {
		printf("Ouverture ratée \n");
		return 0;
	}	
	
	int taille[1];
	lseek(f1, -sizeof(int), SEEK_END);
	int counter;
	read(f1, &counter, sizeof(int));
	printf("%d", counter);
	lseek(f1, -counter-4, SEEK_END);
	char buffer[counter];
	read(f1, buffer, counter);
	write(f2, buffer, counter);
	close(f1);
	close(f2);
	return 0;
}