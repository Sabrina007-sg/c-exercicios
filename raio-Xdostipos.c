#include <stdio.h>


int main(){
    int inteiro;
    char letra;
    float valor;
    double real;

    printf("char: \t%zu byte(s)\n", sizeof(letra));
    printf("int:  \t%zu byte(s)\n", sizeof(inteiro));
    printf("float:\t%zu byte(s)\n", sizeof(valor));
    printf("double:\t%zu byte(s)\n", sizeof(real));



    return 0;
}
