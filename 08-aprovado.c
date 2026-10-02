#include <stdio.h>


int main(){
   int nota1, nota2, nota3;
    float media;
   printf("Informe suas 3 notas:\n");
   scanf("%d %d %d",&nota1,&nota2,&nota3);

    printf("NOTAS\n");
    printf("%d\n",nota1);
    printf("%d\n",nota2);
    printf("%d\n",nota3);
    media = (float)(nota1 + nota2 + nota3) / 3;
    printf("Media: %.2f\n", media);

    if(media >= 7.0){
     printf("Aprovado\n");
    }else{
     printf("Reprovado\n");
    }



    return 0;
}
