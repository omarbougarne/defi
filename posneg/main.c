#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombre;
    printf("Entrer un nombre:\n");
    scanf("%d", &nombre);

    if (nombre < 0){
        printf("LE nombre est negative");
    }else{
        printf("Positive");
    }
    return 0;
}
