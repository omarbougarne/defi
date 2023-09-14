#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3;
    printf("Entrer un nombre:\n");
    scanf("%d", &n1);
    printf("Entrer un nombre:\n");
    scanf("%d", &n2);
    printf("Entrer un nombre:\n");
    scanf("%d", &n3);

    if (n1 > n2 && n1 > n3){
        printf("Le plus grand nombre est %d", n1);
    }else if (n1 < n2 && n2 > n3){
        printf("Le plus grand nombre est %d", n2);
    }else{printf("le plus grand nombre est %d", n3);
    }
    return 0;
}
