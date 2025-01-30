#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int c=1<<31;
    if(a&c){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}