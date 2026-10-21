#include <stdio.h>

int soma(int a, int b){
    return a + b;
}

int maior(int a, int b){
    if(a > b){
        return  a;
    }
        return  b;
}

void linha(){
    printf("-------------\n");
}

int main(){
    int a,b;
    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);
    linha();
    int r = soma(a,b);
    printf("Soma: %d\n",r);
    int m = maior(a,b);
    printf("Maior: %d\n", m);
    linha();

    return 0;

}


