#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char string[20];

    printf("Entrer un string\n");
    scanf("%s", string);

    strrev(string);

    printf("%s", string);
    return 0;
}
