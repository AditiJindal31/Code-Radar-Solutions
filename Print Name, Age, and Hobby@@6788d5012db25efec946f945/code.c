#include<stdio.h>
int main(){
    char str1[20];
    int age;
    char str2[40];
    scanf("%s",&str1);
    scanf("%d",&age);
    scanf("%s",&str2);
    printf("Name: %s\n",str1 );
    printf("Age: %d\n",age);
    printf("Hobby: %s",str2);
}