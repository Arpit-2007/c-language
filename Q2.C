#include <stdio.h>
int main(){
    int a,b,sum,diff,pro;
    float quo;
    printf("enter number a : ");
    scanf("%d",&a);
    printf("enter number b : ");
    scanf("%d",&b);
    sum = a + b;
    printf("the sum is : %d\n", sum);
    diff = a - b;
    printf("the difference is : %d\n", diff);
    pro = a * b;
    printf("the product is : %d\n", pro);
    if ( b != 0 ){
        quo = (float)a/b;
        printf("the quotient is : %.2f\n", quo);
    } else {
        printf("division from 0 is not allowed");
    }

}