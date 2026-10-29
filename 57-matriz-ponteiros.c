
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lin, col;

    printf("Linhas: ");
    scanf("%d", &lin);

    printf("Colunas: ");
    scanf("%d", &col);

    int **matriz = malloc(lin * sizeof(int *));

    if (matriz == NULL)
    {
        printf("Erro na alocacao de memoria\n");
        return 1;
    }

    for (int i = 0; i < lin; i++)
    {
        matriz[i] = malloc(col * sizeof(int));

        if (matriz[i] == NULL)
        {
            printf("Erro na alocacao de memoria\n");
            return 1;
        }
    }

    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            *(*(matriz + i) + j) = i * col + j;
        }
    }

    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%3d", *(*(matriz + i) + j));
        }

        printf("\n");
    }

    for (int i = 0; i < lin; i++)
    {
        free(matriz[i]);
    }

    free(matriz);

    return 0;
}
