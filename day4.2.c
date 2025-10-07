#include <stdio.h>
int main (){
    int n,i,sum;
    printf("Enter any number : ");
    scanf("%d",&n);
    for ( i=1 ; i <= n ; i++ ){
        sum += i;
    }
    printf("The sum of natural num till %d is : %d\n",n,sum);
}