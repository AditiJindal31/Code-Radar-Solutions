#include<stdio.h>
int main (){
int N;
scanf("%d",&N);
int a=1,num;
for(int i=1;i<=N;i++){
    for(int j=1;j<=a;j++){
        scanf("%d",&num);
        printf("%d",num);
    }
     a++;
    printf("\n");
}
return 0;
}