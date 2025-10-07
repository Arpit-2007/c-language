#include <stdio.h>
int main (){
    char n;
    printf("Enter any character: ");
    scanf("%c",&n);
    if (n=='a' || n=='e' || n=='i' || n=='o' || n=='u' || n=='A' || n=='E' || n=='I' || n=='O' || n=='U' ){
        printf("%c is a vowel", n);
    }
    else{
        printf("%c is a consonant", n);
    }
    return 0;
}