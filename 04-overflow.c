#include <stdio.h>


int main(){
   // int tem 32 bits. O maior valor é 2147483647.
    // Somando 1, passa do limite e volta para o menor valor (negativo).
    int numero = 2147483647;
    numero = numero + 1;

    // long long tem 64 bits, então 2147483648 cabe sem problema.
    long long num = 2147483647;
    num = num + 1;

    printf("int:        \t%d\n", numero);
    printf("long long:  \t%lld\n", num);

    return 0;
}
