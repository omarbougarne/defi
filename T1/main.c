#include <stdio.h>
#include <stdlib.h>

int main()
{   int i,j,k;
    int n;

    printf("entrez un nombre:\n");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
