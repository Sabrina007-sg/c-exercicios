#include <stdio.h>

typedef struct {
    char c;     // 1 byte + 3 de padding
    int i;      // 4 bytes
} A;

typedef struct {
    char c1;    // 1 byte
    char c2;    // 1 byte (cabe no espaço que seria padding)
    int i;      // 4 bytes, com 2 de padding antes
} B;

typedef struct {
    char c1;    // 1 byte + 3 de padding
    int i;      // 4 bytes
    char c2;    // 1 byte + 3 de padding no final
} C;

int main() {
    printf("A: %zu\n", sizeof(A));
    printf("B: %zu\n", sizeof(B));
    printf("C: %zu\n", sizeof(C));

    // B e C tem os mesmos campos, mas em ordem diferente.
    // Em C, o char c2 vem depois do int, e o compilador adiciona
    // padding no final para o tamanho ficar multiplo de 4.

    return 0;
}
