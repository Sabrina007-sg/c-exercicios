#include <stdio.h>

int main() {
    unsigned int numero = 4294967295;
    numero = numero + 1;

    // O unsigned int chegou ao valor máximo. Ao somar 1, ocorre overflow e o valor volta para 0.
    printf("unsigned int: %u\n", numero);

    unsigned short pequeno = 65535;
    pequeno = pequeno + 1;

    // O unsigned short chegou ao valor máximo. Ao somar 1, ocorre overflow e o valor volta para 0.
    printf("unsigned short: %hu\n", pequeno);

    return 0;
}
