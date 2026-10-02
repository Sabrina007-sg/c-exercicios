#include <stdio.h>

int main() {
    int opcao, numero;

    do {
        printf("\n1 - Dizer ola\n");
        printf("2 - Mostrar o dobro de um numero\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Ola!\n");
                break;

            case 2:
                printf("Digite um numero: ");
                scanf("%d", &numero);
                printf("Dobro: %d\n", numero * 2);
                break;

            case 0:
                printf("Ate logo!\n");
                break;

            default:
                printf("Opcao invalida\n");
        }

    } while (opcao != 0);

    return 0;
}
