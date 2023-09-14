#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombre;
    printf("Entrer un nombre:\n");
    scanf("%d", &nombre);

    if (nombre < 0){
        printf("LE nombre est negative");
    }else if (nombre == 0){
        printf("null");
    }else{printf("positive");}
    return 0;
}
