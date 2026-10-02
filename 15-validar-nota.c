#include <stdio.h>

int main() {
    int nota;

    do {
        printf("Digite uma nota (0 a 10): ");
        scanf("%d", &nota);

        if (nota < 0 || nota > 10) {
            printf("Nota invalida!\n");
        }

    } while (nota < 0 || nota > 10);

    printf("Nota registrada: %d\n", nota);

    return 0;
}
