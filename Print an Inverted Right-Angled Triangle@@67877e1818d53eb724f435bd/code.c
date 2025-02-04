#include <stdio.h>
int main(){
    int N , j,i;
    scanf("%d",&N);
    for (i=N;i>=1;i--){
        for(j=i;j<=i;j++){
            printf("* ");
        }
    printf("\n");
}
}