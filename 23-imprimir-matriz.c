#include <stdio.h>
#define LIN 3
#define COL 3

int main() {
    int m[LIN][COL] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};

    for(int i = 0; i < LIN; i++){
        for(int j = 0; j < COL; j++){
            printf("%3d", m[i][j]);
        }
        printf("\n");
    }



    return 0;
}
