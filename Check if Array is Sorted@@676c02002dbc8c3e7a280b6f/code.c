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
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                sorted=0;
                break;
            }
        }
    }
    if(sorted==1){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
    return 0;
    
}