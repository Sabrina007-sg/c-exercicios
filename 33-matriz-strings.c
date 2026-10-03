#include <stdio.h>
#include <string.h>
#define QTD 5

int main()
{
    char nomes[QTD][30];
    int maior = 0;
    int pos_maior = 0;



    for(int i = 0; i < QTD; i++)
    {
        printf("Nome %d: ", i + 1);
        fgets(nomes[i], sizeof(nomes[i]), stdin);
        nomes[i][strcspn(nomes[i], "\n")] = '\0';

    }

    printf("Lista:\n");

    for(int i = 0; i < QTD; i++)
    {
        printf("%d - %s\n", i + 1, nomes[i]);
    }

    for (int i = 0; i < QTD; i++)
    {
        size_t tam = strlen(nomes[i]);
        if (tam > maior)
        {
            maior = tam;
            pos_maior = i;
        }
    }

    printf("\nMaior nome: %s (%zu letras)\n", nomes[pos_maior], maior);


    return 0;
}
