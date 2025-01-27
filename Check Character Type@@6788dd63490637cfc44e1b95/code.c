#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch ==  'a','i','o','e','u'){
    printf("Vowel");
    }
    else if ( ch > 'a' && ch <'z' &&ch != 'a','e','i','o','u'){
    printf("Consonant" );
}
    else
    printf("Digit");
}