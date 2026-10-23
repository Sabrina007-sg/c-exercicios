#include <stdio.h>

int somaVetor(int *v, int tam){
    int soma = 0;
    for(int i = 0; i < tam; i++){
      soma += (*(v + i));
    }
    return soma;
}

int main(){

   int v[5] = {5, 10, 15, 20, 25};
   int *p = v;

    printf("Valores:");
    for(int i = 0; i < 5; i++){
        printf(" %d", *(p+i));
    }

    printf("\nSoma: %d\n", somaVetor(v, 5));
    return 0;
}
