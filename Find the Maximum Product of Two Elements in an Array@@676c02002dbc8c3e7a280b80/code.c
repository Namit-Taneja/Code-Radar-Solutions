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
        int prod=arr[n-1]*arr[n-2];
    // }
    printf("%d",prod);
    return 0;
}