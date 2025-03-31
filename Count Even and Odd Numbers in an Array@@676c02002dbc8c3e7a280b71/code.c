#include<stdio.h>
int main(){
    int n,even_count=0,odd_count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        printf("%d",i+1);
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even_count= even_count +arr[i];
            even_count++;
            printf("%d ", even_count);
        }
        if(arr[i]%2!=0){ odd_count = odd_count +arr[i];
        odd_count++;
           printf("%d ",odd_count);}

    }
     printf("%d %d ", even_count,odd_count);
    return 0;
}