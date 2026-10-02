#include <stdio.h>

int main() {
    int n, i;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--) {
        printf("%d\n", i);
    }

    printf("Fogo!\n");

    return 0;
}
