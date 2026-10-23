#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[30];
    int idade;
} Pessoa;

void aniversario(Pessoa *p){
    p->idade++;
}
void mostrar(const Pessoa *p){
    printf("%s (%d anos)\n", p->nome, p->idade);
}

int main(){
    Pessoa p1;
    strcpy(p1.nome, "Ana");
    p1.idade = 20;
    mostrar(&p1);
    aniversario(&p1);
    aniversario(&p1);
    mostrar(&p1);

return 0;
}
