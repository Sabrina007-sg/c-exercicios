#include <stdio.h>
#include <string.h>
#define QTD 3

typedef struct
{
    char nome[30];
    int matricula;
    float media;
} Aluno;
int main()
{
    Aluno turma[QTD];
    float soma = 0;
    for(int i = 0; i < QTD; i++){
        printf("Aluno %d\n",i+1);
        printf("Nome: ");
        fgets(turma[i].nome, sizeof(turma[i].nome), stdin);
        turma[i].nome[strcspn(turma[i].nome, "\n")] = '\0';
        printf("Matricula: ");
        scanf("%d", &turma[i].matricula);
        printf("Media: ");
        scanf("%f", &turma[i].media);
        soma += turma[i].media;
        getchar();
    }
    printf("-- Turma --\n");
    for(int i = 0; i < QTD; i++){
    printf("\n");
    printf("%s - %.2f - ",turma[i].nome, turma[i].media);
    if(turma[i].media >= 7)
    {
        printf("Aprovado\n");
    }
    else
    {
        printf("Reprovado\n");
    }
    }
printf("Media da turma: %.2f", soma / QTD);

    return 0;
}
