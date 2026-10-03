#include <stdio.h>
#include <string.h>

int main() {
    char frase[100];
    char *palavra;
    int contador = 0;

    printf("Frase: ");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0';

    palavra = strtok(frase, " ");

    while (palavra != NULL) {
        contador++;
        printf("Palavra %d: %s\n", contador, palavra);

        palavra = strtok(NULL, " ");
    }

    printf("Total: %d palavra(s)\n", contador);

    return 0;
}
