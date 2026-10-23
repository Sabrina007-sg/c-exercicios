#include <stdio.h>
int fibRec(int n){
    if( n == 0){
        return 0;
    }if(n == 1){
        return 1;
}
    return fibRec(n - 1) + fibRec(n - 2);
}


int fibIter(int n){
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    int a = 0, b = 1;
    for (int i = 2; i <= n; i++) {
    int prox = a + b;
    a = b;
    b = prox;
}
    return b;
}


int main(){
    int n;
    printf("Digite n: ");
    scanf("%d",&n);

    printf("Recursivo: %d\n", fibRec(n));

    printf("Iterativo: %d\n", fibIter(n));

    return 0;
}
