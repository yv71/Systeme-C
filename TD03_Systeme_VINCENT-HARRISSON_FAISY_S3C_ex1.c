#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#include <fcntl.h>

int main (int argc, char *argv[])
{
	if (argc < 2){
		printf("Il faut un fichier à ouvrir !\n");
		return 0;
	}
	int f1 = open(argv[1], O_RDWR | O_CREAT | O_APPEND);
	if (f1 == -1) {
		printf("Ouverture ratée \n");
		return 0;
	}	

	char buffer[1];
	int i = -1;	
	while (lseek(f1, i, SEEK_END)!=-1){
		lseek(f1, i, SEEK_END);
		int totalRead = read(f1,buffer,1);
		printf("%c", buffer[0]);
		i--;
	}
	printf("\n");
	close(f1);
	return 0;
}