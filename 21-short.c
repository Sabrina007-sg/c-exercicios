#include <stdio.h>

int main() {
    short numero = 32767;

    printf("Tamanho do short: %zu byte(s)\n", sizeof(short));

    numero = numero + 1;

    // O short chegou ao seu valor máximo (32767). Ao somar 1, ocorre overflow e o valor passa para -32768.
    printf("Resultado: %hd\n", numero);

    return 0;
}
