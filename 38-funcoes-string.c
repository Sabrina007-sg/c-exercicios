#include <stdio.h>
#define COL 3
#include <string.h>

int tamanho(char s[]) {
    int total = 0;
    while (s[total] != '\0') {
        total++;
    }
    return total;
}

void imprimirLetras(char s[]) {
    for (int i = 0; s[i] != '\0'; i++) {
        printf("%c\n", s[i]);
    }
}


int somaLinha(int m[][COL], int linha) {
    int soma = 0;
    for (int j = 0; j < COL; j++) {
        soma += m[linha][j];
    }
    return soma;
}

int main() {
    char palavra[100];


    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Palavra: ");
    fgets(palavra, sizeof(palavra), stdin);


    for (int i = 0; palavra[i] != '\0'; i++) {
       palavra[strcspn(palavra, "\n")] = '\0';
    }


    printf("Tamanho: %d\n", tamanho(palavra));
    imprimirLetras(palavra);


    printf("Soma da linha 1: %d\n", somaLinha(matriz, 1));

    return 0;
}
