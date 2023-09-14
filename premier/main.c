#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int nombre;
    bool nopremier = true;
    printf("Entrer un nombre: \n");
    scanf("%d", &nombre);


    for(int i = 2; i<nombre; i++){
        if(nombre%i == 0){
            nopremier = false;
            break;
        }
    }
    if (nopremier && nombre!=1){
        printf("le nombre %d est premier:", nombre);
    }else{printf("no premier");}
    return 0;
}
