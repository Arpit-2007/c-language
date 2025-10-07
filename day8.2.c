#include <stdio.h>
int main (){
    int a, b, c;
    printf("Enter any number a: ");
    scanf("%d",&a);
    printf("Enter any number b: ");
    scanf("%d",&b);
    printf("Enter any number c: ");
    scanf("%d",&c);
    if ( a > b && a > c){
        printf("%d is greater",a);
    }
    else if ( b > c)
    {
        printf("%d is greater",b);
    }
    else {
        printf("%d is greater",c);
    }
    return 0;
    
}