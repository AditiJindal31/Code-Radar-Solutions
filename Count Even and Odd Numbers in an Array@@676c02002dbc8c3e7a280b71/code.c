#include<stdio.h>
int main(){
    int N,even count=0,odd count=0;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<=n;i++){
        printf("%d",arr[i]);
    }
    for(int i=0;i<=n;i++){
        if(i%2==0){
            even count= even count +arr[i];
            printf("%d", even count);
        }
        if(i%2!=0){ odd count = odd count +arr[i];
           printf("%d",odd count);}

    }
    for(int i=0;i<=n;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}