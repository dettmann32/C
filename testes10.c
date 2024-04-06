#include <stdio.h>
#include <stdlib.h>

struct fila {
    int valor;
    struct fila *proximo;
};

struct fila *retornoPtn(struct fila *gancho) {
    int numero;

    printf("Digite um n�mero para verificar se ele est� na lista: ");
    scanf("%d", &numero);

    while (gancho != NULL) {
        if (gancho->valor == numero) {
            return gancho;
        }
        gancho = gancho->proximo;
    }
    return NULL; // Retorna NULL se o n�mero n�o for encontrado na lista
}

int main(int argc, char *argv[]) {
    struct fila m1;
    struct fila m2;
    struct fila m3;

    m1.valor = 1;
    m1.proximo = &m2;

    m2.valor = 2;
    m2.proximo = &m3;

    m3.valor = 3;
    m3.proximo = NULL; // Corrigido para apontar para NULL

    struct fila *gancho = &m1;

    struct fila *resultado = retornoPtn(gancho);

    if (resultado != NULL) {
        printf("N�mero encontrado na lista: %d\n", resultado->valor);
    } else {
        printf("N�mero n�o encontrado na lista.\n");
    }

    return 0;
}

