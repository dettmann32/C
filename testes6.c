#include <stdio.h>
#include <stdlib.h>

struct algo{
		char string[30];
		int idade;
		float peso;
	};
	
	typedef struct algo algo;

int main(int argc, char *argv[]) {
	
	algo algumacoisa = {"sapuppupupu", 18, 0.56};
	
	printf("%s", algumacoisa.string);

	return 0;
}

