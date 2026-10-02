#include <stdio.h>
#include <stdlib.h>

int main(){
    int inteiro;
    char nome;
    float valor;
    double real;

    printf("char: \t%zu byte(s)\n", sizeof(nome));
    printf("int:  \t%zu byte(s)\n", sizeof(inteiro));
    printf("float:\t%zu byte(s)\n", sizeof(valor));
    printf("double:\t%zu byte(s)\n", sizeof(real));



    return 0;
}
