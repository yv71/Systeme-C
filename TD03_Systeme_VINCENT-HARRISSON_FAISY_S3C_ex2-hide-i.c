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
	
	int f1 = open(argv[1], O_RDONLY);
	int f2 = open(argv[2], O_RDWR | O_CREAT | O_APPEND);

	if (f1 == -1 || f2 == -1) {
		printf("Ouverture ratée \n");
		return 0;
	}	
	lseek(f2,0,SEEK_END);
	char buffer[1];
	int counter = 0;
	int total = 0;
	do{
		total = read(f1, buffer, 1);
		if (total > 0){
			write(f2, buffer,1);
			counter++;
		}
	}while(total> 0);
	write(f2,&counter,sizeof(int));
	close(f1);
	close(f2);
	return 0;
}