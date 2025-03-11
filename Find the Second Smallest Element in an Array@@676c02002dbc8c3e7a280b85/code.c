// Your code here...
#include<stdio.h>
int main(){
    int n;
    int all_same=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
for(int i=0;i<n;i++){
    if(arr[i]==arr[0]){
        all_same=1;
    }
    else{
        continue;
    }
}
    if(all_same==1){
        printf("-1");
    }
    else{
    printf("%d",arr[1]);}
    return 0;
}