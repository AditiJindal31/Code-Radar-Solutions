#include <stdio.h>
int main(){
    int N;
    char i,j;
    scanf("%d",&N);
    for(i='A';i<=N;i++){
        for(j='A';j<=i;j++){
            printf("%c ",j);
        }
        printf("\n");
    }
}