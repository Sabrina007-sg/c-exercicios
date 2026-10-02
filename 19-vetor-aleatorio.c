
#include <stdio.h>
#include <stdlib.h>   // rand e srand
#include <time.h>     // time

#define TAM 10

int main() {
    int vetor[TAM];
    srand(time(NULL));
    int maior = vetor[0];

    for(int i = 0; i < TAM; i++){
    vetor[i] = rand() % 100 + 1;

    }


    printf("Vetor: ");
    for(int i = 0; i < TAM; i++){
    printf("%d ", vetor[i]);

    if(vetor[i] > maior){
        maior = vetor[i];
    }
    }
     printf("\nMaior: %d\t", maior);


    return 0;
}
