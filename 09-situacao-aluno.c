#include <stdio.h>


int main()
{
    int nota1, nota2, nota3;
    float media;
    printf("Informe suas 3 notas:\n");
    scanf("%d %d %d",&nota1,&nota2,&nota3);


    media = (float)(nota1 + nota2 + nota3) / 3;
    printf("Media: %.2f\n", media);


    if (media >= 7.0)
    {
        printf("Aprovado\n");
    }
    else if (media >= 5.0)
    {
        printf("Recuperacao\n");
    }
    else
    {
        printf("Reprovado\n");
    }


    return 0;
}
