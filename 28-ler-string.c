#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char primeiro[30], completo[60];

    printf("Informe seu primeiro nome: ");
    scanf("%s", primeiro);
    getchar();
    printf("Informe seu nome completo: ");
    fgets(completo, sizeof(completo), stdin);
    completo[strcspn(completo, "\n")] = '\0';


    printf("Primeiro nome: %s\n", primeiro);
    printf("Nome Completo: %s\n", completo);

 return 0;
}
