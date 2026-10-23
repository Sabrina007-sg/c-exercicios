#include <stdio.h>

long long fatorial(int n){
    if(n == 0){
        return 1;
    }
    return n * fatorial(n - 1);
}

int main(){
    int n;
    printf("Digite n: ");
    scanf("%d", &n);
    printf("Fatorial de %d = %lld\n",n ,fatorial(n));

    return 0;
}
