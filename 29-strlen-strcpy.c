#include <stdio.h>
#include <string.h>

int main(){
    char original[30] = "Linguagem C";
    char copia[30];

    strcpy(copia, original);

    printf("Original: %s\n", original);
    printf("Copia: %s\n",copia);
    printf("Tamanho da copia: %zu\n", strlen(copia));
    printf("Tamanho do vetor: %zu\n", sizeof(copia));



    return 0;
}
