#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    for(int i=1;i<=10;i++){
        b=a*i
        printf("%d*%d=%d",a,i,b);
    }
    return 0;
}