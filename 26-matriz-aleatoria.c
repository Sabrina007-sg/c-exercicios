#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIN 4
#define COL 4

int main(){
srand(time(NULL));
int m[LIN][COL];
int soma = 0;


for (int i = 0; i < LIN; i++) {
    for (int j = 0; j < COL; j++) {
     m[i][j] = rand() % 50 + 1;
     soma += m[i][j];
    }
    }

    printf("Matriz:\n");
    for (int i = 0; i < LIN; i++) {
    for (int j = 0; j < COL; j++) {
      printf("%3d ", m[i][j]);
    }
    printf("\n");
    }
    printf("\n\nSoma: %d",soma);




    return 0;
}
