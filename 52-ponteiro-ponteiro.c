#include <stdio.h>

int main() {
    int numero = 10;
    int *p = &numero;
    int **pp = &p;

    printf("numero: %d\n", numero);
    printf("*p: %d\n", *p);
    printf("**pp: %d\n", **pp);

    **pp = 50;

    printf("Depois de **pp = 50, numero: %d\n", numero);

    printf("Tamanho de p: %zu\n", sizeof(p));
    printf("Tamanho de pp: %zu\n", sizeof(pp));

    return 0;
}
