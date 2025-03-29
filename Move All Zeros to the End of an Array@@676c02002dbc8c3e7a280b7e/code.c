// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int arr2[20];
    int count2=0;
    int arr3[20];
    int count3=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr2[i]=arr[i];
            count2+=1;
        }
        else{
            arr3[i]=arr[i];
            count3+=1;
        }
    }
    int arr4[20];
    for(int i=0;i<count2;i++){
        arr4[i]=arr2[i];
    }
    for(int i=0;i<count3;i++){
        arr4[count2+i]=arr3[i];
    }
    int count4=count2+count3;
    for(int i=0;i<count4;i++){
        printf("%d",arr4[i]);
    }
    return 0;
}  