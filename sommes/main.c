#include <stdio.h>

int main()
{
    float a, b, c, d;
    float somme;
    float moyenne;

    printf("Entrer les quatre nombres\n");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    somme = a + b + c + d;

    printf("La somme de ces nombres est %.2f\n", somme);

    moyenne = somme / 4;

    printf("La moyenne est %.2f\n",moyenne);

    return 0;
}
