#include <stdio.h>
#define LIN 3
#define COL 3

void imprimirMatriz(int m[][COL], int linhas)
{
    for(int i = 0; i < linhas; i++)
    {
        for(int j = 0; j < COL; j++)
        {
            printf("%3d", m[i][j]);
        }
        printf("\n");
    }
}

void dobrarMatriz(int m[][COL], int linhas)
{
    for(int i = 0; i < linhas; i++)
    {
        for(int j = 0; j < COL; j++)
        {
        m[i][j] = m[i][j] * 2;
        }

    }

}

int main()
{
    int m[LIN][COL] = {{1,2,3},{4,5,6},{7,8,9}};

    printf("Original:\n");
    imprimirMatriz(m, LIN);
    printf("\n");
    printf("Dobrada:\n");
    dobrarMatriz(m, LIN);
    imprimirMatriz(m, LIN);


    return 0;
}
