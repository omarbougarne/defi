#include <stdio.h>
#include<ctype.h>

int main() {
    char character;
    do{
    printf("Entrez un caractere : ");
    scanf(" %c", &character);
    }while(!isalpha(character));
    if (character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U' || character == 'a'
        || character == 'e' || character == 'i' || character == 'o' || character == 'u' ) {
        printf("%c est une voyelle.\n", character);
    } else {
        printf("cest une consone.\n");
    }

    return 0;
}
