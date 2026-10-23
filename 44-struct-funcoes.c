#include <stdio.h>

#define QTD 3

typedef struct {
    char nome[50];
    float media;
    char situacao[20];
} Aluno;

Aluno lerAluno() {
    Aluno a;

    printf("Nome: ");
    fgets(a.nome, 50, stdin);

    printf("Media: ");
    scanf("%f", &a.media);
    getchar();

    if (a.media >= 7) {
        sprintf(a.situacao, "Aprovado");
    } else {
        sprintf(a.situacao, "Reprovado");
    }

    return a;
}

void mostrarAluno(Aluno a) {
    printf("%s - %.2f - %s\n", a.nome, a.media, a.situacao);
}

float mediaTurma(Aluno turma[], int qtd) {
    float soma = 0;

    for (int i = 0; i < qtd; i++) {
        soma += turma[i].media;
    }

    return soma / qtd;
}

int main() {
    Aluno turma[QTD];

    for (int i = 0; i < QTD; i++) {
        turma[i] = lerAluno();
    }

    for (int i = 0; i < QTD; i++) {
        mostrarAluno(turma[i]);
    }

    printf("Media da turma: %.2f\n", mediaTurma(turma, QTD));

    return 0;
}
