
#include <stdio.h>


int main(){
    int a = 5,b;
    b = a++; //aqui o B virou 5 primeiro, depois o A vai somar mais 1;


     printf("b = a++ -> a = %d, b = %d\n",a,b);
     a = 5;
     b = ++a; // aqui ja estamos acrescentamos primeiro e depois o b esta recebendo.
     printf("b = ++a -> a = %d, b = %d\n",a,b);

    return 0;
}
