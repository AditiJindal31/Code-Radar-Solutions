#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch>=A && ch<=Z)
    printf(" Uppercase %c",ch);
    else if(ch>=a && ch<= z)
    printf("Lowercase %c",ch);
    else
    printf("Not an alphabet");
}