#include <stdio.h>
#include <string.h>

#define FIL 2
#define COL 2

typedef struct
{
    char nome[30];
    float nota;
} Aluno;

int main()
{
    Aluno sala[FIL][COL];

    float maiorNota;
    int maiorI, maiorJ;

    for (int i = 0; i < FIL; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            printf("Fileira %d, posicao %d\n", i, j);

            printf("Nome: ");
            fgets(sala[i][j].nome, sizeof(sala[i][j].nome), stdin);
            sala[i][j].nome[strcspn(sala[i][j].nome, "\n")] = '\0';

            printf("Nota: ");
            scanf("%f", &sala[i][j].nota);
            getchar();

        }
    }

    maiorNota = sala[0][0].nota;
    maiorI = 0;
    maiorJ = 0;

    for (int i = 0; i < FIL; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if (sala[i][j].nota > maiorNota)
            {
                maiorNota = sala[i][j].nota;
                maiorI = i;
                maiorJ = j;
            }
        }
    }

    printf("--- Sala ---\n");

    for (int i = 0; i < FIL; i++)
    {
        for (int j = 0; j < COL; j++)
        {
          printf("[%d][%d] %s - %.2f\n", i, j, sala[i][j].nome, sala[i][j].nota);
        }
    }

    printf("\nMaior nota: %.2f (%s)\n", maiorNota, sala[maiorI][maiorJ].nome);

    return 0;
}
