#include <stdio.h>
int main(){
    int a,b,d;
    char c;
    scanf("%d%d%c",&a,&b,&c);
    if (c=='+'){
        d=a+b;
        printf("%d",d);
    }
    else if(c=='-'){
        printf("%d",a-b);
    }
    else if(c=='*'){
        printf("%d",a*b);
    }
    else if(c=='/'){
        printf("%d",a/b);
    }
    else{
        printf("error");
    }
    return 0;
}