#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("Entrer un character ou un chiffre: \n");
    scanf("%c", &c);

    if(c >= 'a' && c <= 'z'){
        printf("cest une lettre miniscule %c", c);
    }else if(c >= 'A' && c <= 'Z'){
        printf("cest une lettre majuscule");
    }else if (c >= '0' && c <= '9'){
        printf("cest un chiffre");
    }
    return 0;
}
