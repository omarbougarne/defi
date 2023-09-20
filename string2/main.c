#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string1[20];
    char string2[20];

    printf("Entrer string 1:\n");
    scanf("%s", string1);

    printf("Entrer string 2:\n");
    scanf("%s", string2);

    strcat(string1, string2);

    printf("%s", string1);

    return 0;
}
