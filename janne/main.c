#include <stdio.h>
#include <stdbool.h>

int main() {
    int mois, annee, joursDansLeMois;
    bool isbes;


    printf("Entrez le mois (1-12) : ");
    scanf("%d", &mois);
    printf("Entrez l'année : ");
    scanf("%d", &annee);

    if ((annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0)) {
        isbes = true;
    }

    switch (mois) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            joursDansLeMois = 31;
            break;
        case 4: case 6: case 9: case 11:
            joursDansLeMois = 30;
            break;
        case 2:
            if (isbes){
              joursDansLeMois = 28;
            }else{joursDansLeMois  = 29;
            }
            break;

        default:
            printf("Mois invalide.\n");
            return 1;
    }
    if (isbes){
        printf("le mois est %d", joursDansLeMois);
    }

    return 0;
}
