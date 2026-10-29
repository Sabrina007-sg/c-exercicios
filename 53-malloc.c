#include <stdio.h>
#include <stdlib.h>

int main() {
    float n, media = 0;
    printf("Quantas notas? ");
    scanf("%f", &n);

    float *notas = malloc(n * sizeof(float));
    if(notas == NULL){
        printf("Erro: sem memoria\n");
        return 1;
    }
    //ler notas
    for(int i = 0; i < n; i++){
        printf("Nota %d: ", i+1);
        scanf("%f", &notas[i]);

    }
    //media
     for(int i = 0; i < n; i++){
     media += notas[i];
    }
    printf("Media: %.2f", media/n);

    free(notas);
    return 0;
}
