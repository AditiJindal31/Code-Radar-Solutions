#include <stdio.h>
int main(){
    int N , i;
    scanf("%d",&N);
    int sum=0;
    for (i=0; i<=N ; i++){
        sum= sum +i;
    }
    printf("%d",sum);
}