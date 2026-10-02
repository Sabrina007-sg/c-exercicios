#include <stdio.h>

int main() {

   char letra1, letra2, letra3;

    printf("Digite a primeira letra: ");
    letra1 = getchar();
    getchar();
    printf("Digite a segunda letra: ");
    letra2 = getc(stdin);
    getc(stdin);
    printf("Digite a terceira letra: ");
    letra3 = fgetc(stdin);
    fgetc(stdin);


    printf("Letras %c %c %c\n", letra1,letra2,letra3);

    return 0;
}
