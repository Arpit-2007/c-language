#include <stdio.h>
int main(){
    float celsius,fahrenhit;
    printf("Enter temp in Celsius : ");
    scanf("%f",&celsius),
    fahrenhit = ( celsius * 9/5 ) + 32;
    printf("The temp in Fahrenhit : %.2f\n",fahrenhit);
    return 0;

}