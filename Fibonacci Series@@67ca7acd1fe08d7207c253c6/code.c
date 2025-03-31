#include<stdio.h>
void fibonacciSeries(n){
    next=a+b;
    a=b;
    next=b;
    return;
}
int main(){
    int n,a=0,b=1,next;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        printf("%d",a);
        fibonacciSeries();
    }
    return 0;
}