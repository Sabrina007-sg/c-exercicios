#include <stdio.h>
#include <stdlib.h>


int main()
{
    char nome[20] = "Programa";

    printf("%s\n", nome);
    for (int i = 0; nome[i] != '\0'; i++) {
    printf("%c\n", nome[i]);
}




    return 0;
}
