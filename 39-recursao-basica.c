#include <stdio.h>

void contarAte(int n){
    if(n == 0){
        return;
    }
    contarAte(n - 1);
    printf("%d\n",n);

}
int main(){
    int n;
    printf("Digite n: ");
    scanf("%d", &n);
    contarAte(n);


    return 0;
}
