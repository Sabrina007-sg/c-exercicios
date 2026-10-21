
#include <stdio.h>

int total = 0;

void adicionar(int valor) {
    total += valor;
    printf("Adicionado: %d\n", valor);
}


int dobro(int n) {
    int resultado = n * 2;
    return resultado;
}

int main() {
    adicionar(5);
    adicionar(10);

    printf("Total: %d\n", total);

    printf("Dobro do total: %d\n", dobro(total));

    return 0;
}
