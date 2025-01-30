#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if (ch=="a" || "e"|| "i"|| "o"|| "u"){
        printf("Vowel");
    }
    else{
        printf("Consonant");
    }
    return 0;
}