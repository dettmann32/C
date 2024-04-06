#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	
	int numero = 1;
	
	switch(numero){
		
		case 1:
			printf("This is only a %d number!\n", numero);
			break;
		
		case 2:
			printf("Não é igual a esse. É igual a %d.\n", numero);
			
			break;
		
		
			
		case 3:
			printf("Também n é igual a esse!!!!! Isso é apenas um %d.\n", numero);
			break;
	}
	
	return 0;
}
