#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1 ; i<=a;i++){
        for(int k=1;k<=a-i;k++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int x=1;x<=a-1;x++){
        for(int y=1;y<=x;y++){
            printf(" ");
        }
        for(int z=2*x-1;z>=1;z--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}