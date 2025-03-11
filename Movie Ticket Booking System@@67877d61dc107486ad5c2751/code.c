// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char[20] name;
    char[20] type;
    int price;
    for(int i=1;i<=n;i++){
        scanf("%s %s %d",&name,&type,&price)
    }
    printf("%s: %.2f, "type,price);
    return 0;
}