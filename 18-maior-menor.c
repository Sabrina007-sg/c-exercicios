#include <stdio.h>

#define TAM 5

int main() {
    int numeros[TAM];
    int maior, menor;
    int pos_maior, pos_menor;
    int i;

    for (i = 0; i < TAM; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    maior = numeros[0];
    menor = numeros[0];
    pos_maior = 0;
    pos_menor = 0;

    for (i = 1; i < TAM; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
            pos_maior = i;
        }

        if (numeros[i] < menor) {
            menor = numeros[i];
            pos_menor = i;
        }
    }

    printf("Maior: %d (posicao %d)\n", maior, pos_maior);
    printf("Menor: %d (posicao %d)\n", menor, pos_menor);

    return 0;
}
