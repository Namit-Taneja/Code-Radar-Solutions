// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    int found=0;
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        if(k==arr[i]){
            printf("%d",i);
            found=1;
            break;
        }
        else{
            continue;
        }   
    }
    if(found==0){
        printf("-1");
    }
    return 0;
}