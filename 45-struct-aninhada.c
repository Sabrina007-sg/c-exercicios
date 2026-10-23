#include <stdio.h>
#include <string.h>
#define ANO_ATUAL 2026

typedef struct
{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct
{
    char nome[30];
    Data nascimento;
} Pessoa;

int main()
{

    Pessoa p;
    printf("Nome: ");
    fgets(p.nome, sizeof(p.nome), stdin);
    p.nome[strcspn(p.nome, "\n")] = '\0';

    printf("Dia: ");
    scanf("%d", &p.nascimento.dia);

    printf("Mes: ");
    scanf("%d", &p.nascimento.mes);

    printf("Ano: ");
    scanf("%d", &p.nascimento.ano);


    printf("Nome: %s | Nascimento: %02d/%02d/%d\n",p.nome, p.nascimento.dia, p.nascimento.mes, p.nascimento.ano);
    printf("Idade: %d anos\n", ANO_ATUAL - p.nascimento.ano);



    return 0;
}
