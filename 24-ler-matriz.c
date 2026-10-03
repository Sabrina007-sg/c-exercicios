#include <stdio.h>
#define LIN 2
#define COL 3

int main()
{
    int m[LIN][COL];

    for(int i = 0; i < LIN; i++)
    {
        for(int j = 0; j < COL; j++)
        {
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    printf("\n");
    printf("Matriz:\n");
    for(int i = 0; i < LIN; i++)
    {
        for(int j = 0; j < COL; j++)
        {
            printf("%3d", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}
