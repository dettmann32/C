#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	
	int numero = 1;
	
	switch(numero){
		
		case 1:
			printf("This is only a %d number!\n", numero);
			break;
		
		case 2:
			printf("N�o � igual a esse. � igual a %d.\n", numero);
			
			break;
		
		
			
		case 3:
			printf("Tamb�m n � igual a esse!!!!! Isso � apenas um %d.\n", numero);
			break;
	}
	
	return 0;
}
