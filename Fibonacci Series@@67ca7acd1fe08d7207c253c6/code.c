#include<stdio.h>
void fibonacciSeries(n){
    int a=0,b=1,next;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        printf("%d",a);
        next=a+b;
        a=b;
        next=b;
    }
    return 0;
}
        
