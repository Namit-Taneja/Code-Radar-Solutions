#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%e",&a,&b,&c);
    if (c=="+"){
        printf("%d",a+b);
    }
    else if(c=="-"){
        printf("%d",a-b);
    }
    else if(c=="*"){
        printf("%d",a*b);
    }
    else{
        printf("%d",a/b);
    }
    return 0;
}