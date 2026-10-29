/*Crie int tamanho(char s[]), que conta as letras até o '\0' sem usar strlen e devolve o total.
Crie void imprimirLetras(char s[]), que imprime a string uma letra por linha.
Crie int somaLinha(int m[][COL], int linha), que devolve a soma de uma linha da matriz.
Na main, leia uma palavra com fgets (removendo o \n), mostre o tamanho e as letras. Depois, com uma matriz 3x3 já preenchida, mostre a soma da linha 1.

Exemplo:

Palavra: casa
Tamanho: 4
c
a
s
a
Soma da linha 1: 15

Dicas:

Em tamanho, use um contador em um for ou while que para no '\0'.
Use a matriz {{1,2,3},{4,5,6},{7,8,9}}: a linha 1 é 4 5 6, que soma 15.
Lembre do #define COL 3 no topo.

*/
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
