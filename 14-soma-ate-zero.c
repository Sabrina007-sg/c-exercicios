#include <stdio.h>

int main() {
    int numero, soma = 0;

    printf("Digite um numero (0 para sair): ");
    scanf("%d", &numero);

    while (numero != 0) {
        soma = soma + numero;

        printf("Digite um numero (0 para sair): ");
        scanf("%d", &numero);
    }

    printf("Soma: %d\n", soma);

    return 0;
}
