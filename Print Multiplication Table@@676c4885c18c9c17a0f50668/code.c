#include <stdio.h>
int main(){
    int N , j,i;
    scanf("%d",&N);
    for( int i=1; i<=N; i++){
        for(j=1; j<=10;j++){
        printf( "%d * %d = %d ",i,j, i*j);
    }
    printf("\n");
}
}