#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int stock;
    printf("Entrer un nombre:\n");
    scanf("%d", &x);

    stock = 0;

    while(x!=0){
        stock = stock * 10 + x%10;
        x/=10;
    }
    printf("Le nombre x %d", stock);
    return 0;
}
