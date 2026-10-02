#include <stdio.h>

int main()
{
    float num1, num2, resultado;
    char operador;

    printf("Digite dois numeros: ");
    scanf("%f %f", &num1, &num2);

    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador);

    switch (operador)
    {
    case '+':
        resultado = num1 + num2;
        printf("Resultado: %.2f\n", resultado);
        break;

    case '-':
        resultado = num1 - num2;
        printf("Resultado: %.2f\n", resultado);
        break;

    case '*':
        resultado = num1 * num2;
        printf("Resultado: %.2f\n", resultado);
        break;

    case '/':
        if (num2 != 0)
        {
            resultado = num1 / num2;
            printf("Resultado: %.2f\n", resultado);
        }
        else
        {
            printf("Erro: divisao por zero\n");
        }
        break;
    default:
        printf("Operador invalido\n");
    }

    return 0;
}
