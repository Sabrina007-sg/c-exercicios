#include <stdio.h>

int main() {
    int idade;
    char nome;
    float salario;

    printf("Informe a sua idade: ");
    scanf("%d", &idade);
    printf("informe a inicial do seu nome: ");
    scanf(" %c", &nome);
    printf("Informe seu salario: ");
    scanf("%f", &salario);


    printf("\t\tFIXA\n");
    printf("\tSua idade eh \"%d\"\n", idade);
    printf("\tA inicial do seu nome eh \"%c\"\n", nome);
    printf("\tSeu salario eh \"%.2f\"\n", salario);


    return 0;
}
