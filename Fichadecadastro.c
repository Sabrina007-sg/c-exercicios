#include <stdio.h>

int main() {
    int idade;
    char inicial;
    double salario;
    float altura;

    printf("Informe a sua idade: ");
    scanf("%d", &idade);
    printf("informe a inicial do seu nome: ");
    scanf(" %c", &inicial);
    printf("Informe seu salario: ");
    scanf("%1f", &salario);
    printf("Informe sua altura: ");
    scanf("%f", &altura);


    printf("\t\tFICHA\n");
    printf("\tSua idade eh \"%d\"\n", idade);
    printf("\tA inicial do seu nome eh \"%c\"\n", inicial);
    printf("\tSeu salario eh \"%.2f\"\n", salario);
    printf("\tSua altura eh \"%.2f\"\n", altura);


    return 0;
}
