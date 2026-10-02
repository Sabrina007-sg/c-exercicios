
#include <stdio.h>


int main(){
    int segundos, minutos;

    printf("Digite o total de segundos: ");
    scanf("%d",&segundos);

    minutos = segundos/60; // aqui estamos dividindo o segundos por 60, pois cada minuto tem 60 segundos.
    segundos%=60; // O % significa o resto da divisão,  isso ficou sobrando na hora que fez a divisão;

    printf("%d minuto(s) e %d segundo(s)\n", minutos, segundos);

    return 0;
}
