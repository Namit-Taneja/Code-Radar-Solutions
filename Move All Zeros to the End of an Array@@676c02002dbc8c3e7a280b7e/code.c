// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int arr2[n];
    // int count2=0;
    // int arr3[n];
    int count3=0;
    int b=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr2[b]=arr[i];
            b++;
            // count2+=1;
        }
        else{
            // arr3[i]=arr[i];
            count3+=1;
        }
    }
    // int arr4[n];
    for(int i=0;i<count3;i++){
        arr2[b]=0;
        b++;
        
    }
    // for(int i=0;i<count3;i++){
        // arr4[count2+i]=arr3[i];
    // }
    // int count4=count2+count3;
    // for(int i=0;i<count4;i++){
    //     printf("%d",arr4[i]);
    // }
    for(int i=0;i<n;i++){
        printf("%d ",arr2[i]);
    }
    return 0;
}  