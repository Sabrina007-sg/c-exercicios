
#include <stdio.h>


int main(){
    int a = 5,b;
    b = a++; //aqui o B virou 5 primeiro, depois somou 1, que foi para 6;


     printf("b = a++ -> a = %d, b = %d\n",a,b);
     --a;
     b = ++a;
     printf("b = ++a -> a = %d, b = %d\n",a,b);

    return 0;
}
