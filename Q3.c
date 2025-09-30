#include <stdio.h>
int main(){
    float len,breadth,area,peri;
    printf("enter length : ");
    scanf("%f", &len);
    printf("enter breadth : ");
    scanf("%f", &breadth);
    area = len * breadth;
    printf("the area is : %.2f\n", area);
    peri = 2 * (len+breadth);
    printf("the perimeter is : %.2f\n", peri);
    return 0;
}