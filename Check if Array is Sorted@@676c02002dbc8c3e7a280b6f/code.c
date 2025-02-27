// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sorted=1;
    for(int i=0;i<n;i++){
        if(i==0){
            if(arr[i]<arr[n-1] && arr[i]<arr[i+1]){
                continue;
            }
            else{
                break;
                printf("Not Sorted");
            }
        }
        else if(i==n-1){
            if(arr[i]>arr[i-1] && arr[i]>arr[0]){
                continue;
            }
            else{
                break;
                printf("Not Sorted");
            }
        }
        else if(arr[i]<arr[i-1] && arr[i]>arr[i+1]){
            printf("Sorted");
        }
    }
    return 0;
}