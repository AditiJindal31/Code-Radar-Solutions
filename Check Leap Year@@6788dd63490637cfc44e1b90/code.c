#include <stdio.h>
int main(){
  int Yr;
  scanf("%d",&Yr);
  if(Yr%4==0 && Yr%400==0)
  printf("Leap Year");
//   else if(Yr%400==0)
//   printf("Leap Year");
  else
  printf("Not a Leap Year");
}