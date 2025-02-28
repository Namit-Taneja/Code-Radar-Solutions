// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int arr2[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=n-1;i>0;i--){
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=arr2[i]){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
    return 0;
}