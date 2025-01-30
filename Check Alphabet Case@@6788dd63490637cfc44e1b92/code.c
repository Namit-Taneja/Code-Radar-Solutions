#include <stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    if(c>='a' && c<='z'){
        printf("Lowercase");
    }
    else{
        printf("Uppercase");
    }
    return 0;
}