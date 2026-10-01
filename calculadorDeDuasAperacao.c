#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);

    printf("Soma:\t\t%d\n", num1 + num2);
    printf("Subtracao:\t%d\n", num1 - num2);
    printf("Multiplicacao:\t%d\n", num1 * num2);
    printf("Divisao:\t%.2f\n", (float)num1/(float)num2);
    return 0;
}
