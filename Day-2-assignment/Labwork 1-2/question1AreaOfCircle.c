#include <stdio.h>
#define PI 3.14

main(){
    float r, area;

    printf("Enter Radious: ");
    scanf("%f", &r);

    area = PI * r * r;

    printf("Area of circle = %.2f", area);
}