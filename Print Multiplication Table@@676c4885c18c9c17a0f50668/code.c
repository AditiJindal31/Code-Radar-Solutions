#include <stdio.h>
int main(){
    int N , j,i;
    scanf("%d",&N);
    for( int i=1; i<=N; i++){
        for(j=1; j<=N;j++){
        printf( " %d \n", i*j);
    }
    printf("\n");
}
}