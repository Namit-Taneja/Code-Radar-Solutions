// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>for(int i=i+1;i<n;i++)){
            printf("%d",arr[i]);
        }
        else{
            continue;
        }
    }
    return 0;
}