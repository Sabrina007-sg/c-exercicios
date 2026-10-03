#include <stdio.h>
#include <string.h>

int main(){
    char nome[30], sobrenome[60], completo[100], senha[30];

    printf("Informe seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome,"\n")] = '\0';
    printf("informe seu sobrenome: ");
    fgets(sobrenome, sizeof(sobrenome), stdin);
    sobrenome[strcspn(sobrenome,"\n")] = '\0';
    strcpy(completo, nome);
    strcat(completo, " ");
    strcat(completo, sobrenome);

    printf("informe uma senha: ");
     fgets(senha, sizeof(senha), stdin);
    senha[strcspn(senha, "\n")] = '\0';


    printf("Nome: %s\n", nome);
    printf("Sobrenome: %s\n ", sobrenome);
    printf("Nome completo: %s\n", completo);
    printf("Senha: %s\n", senha);

    if (strcmp(senha, "abc123") == 0){
        printf("Acesso liberado\n");
    }else{
      printf("Acesso negado\n");
     }



    return 0;
}
