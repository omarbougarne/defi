#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string[20];
    printf("Entrer un string\t");
    scanf("%s", string);
    int result = strlen(string);
    printf("%d\n", result);
    return 0;
}
