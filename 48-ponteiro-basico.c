#include <stdio.h>

int main(){
    int numero = 10;
    int *p = &numero;


    printf("Numero: %d\n", numero);
    printf("*p: %d\n", *p);
    printf("Endereco de numero: %p\n", (void*)&numero);
    printf("Valor de p: %p\n", (void*)p);

    *p = 99;
    printf("Depois de *p = 99, numero: %d\n", numero);

    return 0;
}
