#include <stdio.h>
int main (){
    float n;
    printf("Enter any no: ");
    scanf("%f",&n);
    if (n>0){
        printf("%f is a positive number", n);
    }
    else if (n == 0)
    {
        printf("%f is zero", n);
    }
    else 
    {
        printf("%f is a negative number", n);
    }
    return 0;
    
    
}