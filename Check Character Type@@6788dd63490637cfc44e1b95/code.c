#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch != 'a','i','o','e','u')
    printf("Consonant");
    else if (ch == 'a','e','i','o','u')
    printf("Vowel" );
    else
    printf("Digit");
}