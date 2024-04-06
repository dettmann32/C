#include <stdio.h>
#include <stdlib.h>

typedef struct no{
	int valor;
	struct no *proximo;	
	
}No;


void addNoInList(No **lista, int data){
	No *novo_no = malloc(sizeof(No));
	
	if(novo_no){
		
		novo_no->valor = data;
		novo_no->proximo = *lista;
		*lista = novo_no;
	}else{
		
		printf("Deu ruim");
	
	};
};

int main(int argc, char *argv[]) {
	
	No *head = NULL;
	
	addNoInList(&head, 35);
	addNoInList(&head, 36);
	addNoInList(&head, 37);
	addNoInList(&head, 38);
	
	printf("%d",head->valor);
	
	No *temp = head;
    while (temp) {
        printf("%d -> ", temp->valor);
        temp = temp->proximo;
    }
    
    system("pause");
    system("cls");
	
	return 0;
}
