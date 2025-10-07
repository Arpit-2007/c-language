#include <stdio.h>
int main (){
    char n;
    printf("Enter character : ");
    scanf("%c",&n);
    if ( n >= 'A' && n <= 'Z'){
        printf("%c is uppercase",n);
    }
    else if ( n >= 'a' && n <= 'z')
    {
        printf("%c is lowercase",n);
    }
    else if ( n >= '0' && n <= '9')
    {
        printf("%c is digit",n);
    }
    else{
        printf("%c is a special character",n);
    }
    return 0;
    
}