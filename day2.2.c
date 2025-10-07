#include <stdio.h>
#define pi 3.14159
int main(){
    float circumference,radius,area;
    printf("enter radius : ");
    scanf("%f",&radius);
    circumference = 2 * pi * radius ;
    printf("the circumference of circle is %.2f\n",circumference);
    area = pi * radius * radius;
    printf("The area of circle is : %.2f\n",area);
    return 0;

}