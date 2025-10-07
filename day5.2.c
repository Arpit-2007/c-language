#include <stdio.h>
int main (){
    int hours,min,sec;
    printf("Enter time in sec: ");
    scanf("%d",&sec);
    hours = sec / 3600;
    sec = sec % 3600;
    min = sec / 60;
    sec = min % 60;
    printf("%d:%d:%d", hours, min, sec);
    return 0;
}