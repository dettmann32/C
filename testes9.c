#include <stdio.h>
#include <stdlib.h>

struct estrutura{
	int valor;
	struct estrutura *proximo
};

typedef struct estrutura estrutura;

int main(int argc, char *argv[]) {
	
	estrutura m1;
	estrutura m2;
	estrutura m3;
	
	m1.valor = 3;
	m1.proximo = &m2;
	
	m2.valor = 4;
	m2.proximo = &m3;
	
	m3.valor = 5;
	m3.proximo = 0;
	
	estrutura *gancho;
	
	gancho = &m1;
	
	while(gancho != 0){
		
		printf("%d", gancho->valor);
		gancho = (*gancho).proximo ;
	} 

	return 0;
}
