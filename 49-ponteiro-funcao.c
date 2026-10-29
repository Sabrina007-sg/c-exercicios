#include <stdio.h>

void trocar(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}
void dobrar(int *x){
    *x *= 2;
}
int main(){
    int x = 3, y = 7;
    printf("Antes: x = %d, y = %d\n",x,y);
    trocar(&x,&y);
    printf("Depois de trocar: x = %d, y = %d\n",x,y);
    dobrar(&x);
    printf("Depois de dobrar x: x = %d, y = %d\n",x,y);

    return 0;
}
