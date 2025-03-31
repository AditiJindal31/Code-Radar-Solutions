#include<stdio.h>
int main(){
    int n,even_count=0,odd_count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n;i++){
        printf("%d",arr[i]);
    }
    for(int i=0;i<=n;i++){
        if(i%2==0){
            even_count= even_count +arr[i];
            printf("%d", even_count);
        }
        if(i%2!=0){ odd_count = odd_count +arr[i];
           printf("%d",odd_count);}

    }
    for(int i=0;i<=n;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}