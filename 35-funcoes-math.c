#include <stdio.h>
#include <math.h>

double areaCirculo(double raio)
{
    return 3.14159 * pow(raio, 2);
}

double hipotenusa(double a, double b)
{
    return  sqrt(a*a + b*b);
}

int main()
{
    double raio;
    double cateto1, cateto2;

    printf("Raio: ");
    scanf("%lf", &raio);
    printf("Area: %.2f\n", areaCirculo(raio));

    printf("Cateto a: ");
    scanf("%lf", &cateto1);
    printf("Cateto b: ");
    scanf("%lf", &cateto2);
    printf("Hipotenusa: %.2f\n", hipotenusa(cateto1, cateto2));


    return 0;
}
