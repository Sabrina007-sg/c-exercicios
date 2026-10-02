#include <stdio.h>

int main() {
    float notas[5];
    float soma = 0;
    float media;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    for (i = 0; i < 5; i++) {
        soma = soma + notas[i];
    }

    media = soma / 5;

    printf("Media: %.2f\n", media);

    return 0;
}
