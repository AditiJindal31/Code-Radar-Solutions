#include<stdio.h>
int main(){
    char CH;
    scanf("%c",&CH);
    // if( CH== 'a','e','i','o','u')
    //  printf("Vowel");
     if ( CH >= 'b' && CH<='z' && CH!= 'a','e','i','o','u')
     printf("Consonant");
      else if( CH = 'a','e','i','o','u')
     printf("Vowel");
     else if( CH >= 1 && CH <= 100)
     printf("Digit");
     else
     printf("Special Character");
 }