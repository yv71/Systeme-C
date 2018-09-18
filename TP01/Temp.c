#include <stdio.h>
int main(){
	for (int i = 0; i <= 300; i= i +20){
		int C = 5*(i-32)/9;
		printf("%s %d","Temperature F° : ", i);
		printf("%s %d", " Temperature C° : " ,C);
		printf("\n");
	}
	return 0;
}