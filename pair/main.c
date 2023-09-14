#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombre;

    printf("Entrer un nombre:\n");
    scanf("%d", &nombre);

    if (nombre % 2 == 0){
        printf("Le nombre est pair");
    }else{
        printf("Le nombre est impair");
    }
    return 0;
}
