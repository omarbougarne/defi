#include <stdio.h>
#include <stdlib.h>

int main()
{
    float prix, prixtotal;
    int quantite;

    printf("Entrer la quantite\n");
    scanf("%d", &quantite);
    printf("Entrer le prix unitaire\n");
    scanf("%f", &prix);

    prixtotal = prix * quantite;

    if (quantite > 10){
        prixtotal -= prixtotal * 0.1;
        }
    printf("le prix total est: %f", prixtotal);
    return 0;
}
