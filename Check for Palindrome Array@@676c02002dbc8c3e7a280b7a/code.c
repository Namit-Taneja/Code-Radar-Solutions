// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int arr2[n];
    int a=1;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=n;i>0;i--){
        arr2[i]=arr[i];
    }
    for(int i=0;i<n;i++){
        printf("%d",arr2[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=arr2[i]){
            a=a+1;
        }
        else{
            continue;
        }
    }
    if(a==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
   
    return 0;

}