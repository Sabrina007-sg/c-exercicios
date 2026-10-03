#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char frase[100];
    char letra;
    char palavra[30];

    printf("Frase: ");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0';

    printf("Letra: ");
    scanf(" %c", &letra);
    getchar();

    if (strchr(frase, letra) != NULL) {
        printf("A letra %c aparece\n", letra);
    } else {
        printf("A letra %c nao aparece\n", letra);
    }

    printf("Palavra: ");
    fgets(palavra, sizeof(palavra), stdin);
    palavra[strcspn(palavra, "\n")] = '\0';

    if (strstr(frase, palavra) != NULL) {
        printf("A palavra %s aparece\n", palavra);
    } else {
        printf("A palavra %s nao aparece\n", palavra);
    }

    for (int i = 0; frase[i] != '\0'; i++) {
        frase[i] = toupper((unsigned char)frase[i]);
    }

    printf("Maiusculo: %s\n", frase);

    return 0;
}
