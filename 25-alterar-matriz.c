#include <stdio.h>
#define LIN 3
#define COL 3

int main()
{
    int m[LIN][COL] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};

    printf("Original:\n");
    for(int i = 0; i < LIN; i++)
    {
        for(int j = 0; j < COL; j++)
        {
            printf("%3d", m[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Apos trocar o centro:\n");
    m[1][1] = 0;
    for(int i = 0; i < LIN; i++)
    {
        for(int j = 0; j < COL; j++)
        {
            printf("%3d", m[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("Apos dobrar tudo:\n");
    for(int i = 0; i < LIN; i++)
    {
        for(int j = 0; j < COL; j++)
        {
            m[i][j] = m[i][j] * 2;
            printf("%3d",m[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("Apos zerar a ultima linha:\n");
    for(int i = 0; i < LIN; i++)
    {
        for(int j = 0; j < COL; j++)
        {
            m[2][j] = 0;
        }
    }
      for(int i = 0; i < LIN; i++)
    {
        for(int j = 0; j < COL; j++)
        {
             printf("%3d",m[i][j]);
        }
         printf("\n");
        }


    return 0;
}
