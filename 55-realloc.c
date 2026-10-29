
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vetor = malloc(3 * sizeof(int));

    if (vetor == NULL)
    {
        printf("Erro: sem memoria\n");
        return 1;
    }

    vetor[0] = 10;
    vetor[1] = 20;
    vetor[2] = 30;

    printf("Antes: ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", vetor[i]);
    }

    int *temporario = realloc(vetor, 5 * sizeof(int));

    if (temporario == NULL)
    {
        printf("\nErro ao realocar memoria\n");
        free(vetor);
        return 1;
    }

    vetor = temporario;

    vetor[3] = 40;
    vetor[4] = 50;

    printf("\nDepois: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    free(vetor);

    return 0;
}
