#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    printf("Entrer un nombre:\n");
    scanf("%d", &x);
    int i = 2;
    while (i != x){
        if(x % i ==0){
            printf("pas premier");
            break;
        }else{
            i++;
        }
        printf("premier");
        break;
    }

    return 0;
}
