#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 5;

    int *vetorMalloc = malloc(n * sizeof(int));
    if (vetorMalloc == NULL) {
        printf("Erro: sem memoria\n");
        return 1;
    }

    int *vetorCalloc = calloc(5, sizeof(int));
    if (vetorCalloc == NULL) {
        printf("Erro: sem memoria\n");
        return 1;
    }

    printf("malloc: ");
    for(int i = 0; i < n; i++){
        printf("%5d", vetorMalloc[i]);
    }
    printf("\ncalloc: ");
       for(int i = 0; i < n; i++){
        printf("%5d", vetorCalloc[i]);
    }

       for(int i = 0; i < n; i++){
        vetorCalloc[i] = i * 2;
    }

     printf("\ncalloc preenchido: ");
        for (int i = 0; i < n; i++) {
        printf("%d ", vetorCalloc[i]);
    }
    printf("\n");

    free(vetorCalloc);
    free(vetorMalloc);
    return 0;
}
