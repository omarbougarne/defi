#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("entrez une annee :\n");
    scanf("%d",&n);

    if((n%4)==0){
    if(n%100==0){
    if(n%400==0){
        printf("cette annee est bissextile");
    }else{printf("cette annee n'est pas bissextile");}
    }else {printf("bissextile");}
    }else{printf("cette annee est non bissextile");}

    return 0;
}
