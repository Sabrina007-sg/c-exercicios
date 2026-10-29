#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[30];
    int matricula;
    float media;
} Aluno;
int main()
{
    Aluno a;
    printf("Nome: ");
    fgets(a.nome, sizeof(a.nome), stdin);
    a.nome[strcspn(a.nome, "\n")] = '\0';
    printf("Matricula: ");
    scanf("%d", &a.matricula);
    printf("Media: ");
    scanf("%f", &a.media);

    printf("\n");
    printf("--Ficha--\n");
    printf("Nome: %s\n",a.nome);
    printf("Matricula: %d\n",a.matricula);
    printf("Media: %.2f\n", a.media);
    if(a.media >= 7)
    {
        printf("Situacao: Aprovado\n");
    }
    else
    {
        printf("Situacao: Reprovado\n");
    }

    return 0;
}
