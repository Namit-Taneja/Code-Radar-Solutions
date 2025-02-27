// Your code here...
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr);
    }
    int rem=0;
    for (int i=0;i<n;i++){
        int sum=0;
        
        if(a>=0){
            int a=arr[i];
            while(a>0){
                rem=a%10;
                sum=sum+rem;
                a=a/10;
            }
            printf("%d",sum);
        }
        else{
            a=abs(arr[i]);
            while(a>0){
                rem=a%10;
                sum=sum+rem;
                a=a/10;
            }
            printf("%d",sum);
        }
    }
    return 0;
}