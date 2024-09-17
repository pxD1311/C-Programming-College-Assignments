#include <stdio.h>
#include <ctype.h>


int main()
{
    char chr;
    printf("Enter a character :");
    scanf("%c", &chr);

    if(isalpha(chr)){
        if(chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' ||chr == 'u' || chr == 'A' ||chr == 'E' || chr == 'I' ||chr == 'O' || chr == 'U'){
            printf("Vowel.\n");
        }else{
            printf("Consonant.\n");
        }
    }else{
        printf("Invalid Input.\n");
    }


    return 0;
}