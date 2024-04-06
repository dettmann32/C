#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int idade = 0;
	
	printf("Sua idade atual é de %d anos \n", idade);
	
	printf("Digite um novo valor para atualizar \n");
	
	scanf("%d", &idade);
	
	printf("Sua idade foi atualizada no sistema para %d anos", idade);
	
	return 0;
}
