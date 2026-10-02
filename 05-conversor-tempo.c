
#include <stdio.h>


int main(){
    int segundos, minutos;

    printf("Digite o total de segundos: ");
    scanf("%d",&segundos);

    minutos = segundos/60;
    segundos%=60;

    printf("%d minuto(s) e %d segundo(s)", minutos, segundos);

    return 0;
}
