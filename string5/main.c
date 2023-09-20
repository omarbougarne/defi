#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
bool isPalindrome(char string[]);

int main()
{
    char string[20];

    printf("Entrer un string\n");
    scanf("%s", string);

    if(isPalindrome(string)){
        printf("is palindrome");
    }else{
        printf("pas palindrome");
    }
    return 0;
}
bool isPalindrome(char string[]){

    int i, j;

     printf("*******************\n");

    for( i = 0, j=strlen(string)-1; i<=strlen(string)/2, j<=strlen(string)/2; i++, j--){
            printf("i=%d \n j= %d",i,j);
        if(string[i]==string[j]){
            return true;
        }
    }

    return false;
}
