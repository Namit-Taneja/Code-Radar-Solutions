// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    // for(int i=0;i<n;i++){
        
    // }
    if(n==1){
        printf("-1");
    }
    else if(arr[0]==arr[n-1]){
        printf("-1");
    }
    else if(arr[0]<0){
        printf("%d",arr[1]);
    }
    else{
        printf("%d",arr[n-2]);
    }
    return 0;
}