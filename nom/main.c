#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nom    ;
    char prenom;
    int age;
    char sexe;
    int num;

    printf("Entrez votre nom:\n");
    scanf("%s", nom);

    printf("Entrez votre prenom:\n");
    scanf("%s", prenom);

    printf("Entrez votre age:\n");
    scanf("%d", &age);

    printf("Entrez votre sexe:\n");
    scanf("%s", sexe);

    printf("Entrez votre numero de telephone:\n");
    scanf("%d", &num);

    return 0;
}
