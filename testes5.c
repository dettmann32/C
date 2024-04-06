#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int vetor[50] = {3,5,1,5,6,3,21,45};
	
	
	scanf("%d", &vetor[3]);
	
	printf("%d", vetor[3]);
	
	int c;
	
	for(c = 0; c <= 50; c++){
		printf("%d\n", vetor[c]);
	}
	
	
	
	
	return 0;
}
