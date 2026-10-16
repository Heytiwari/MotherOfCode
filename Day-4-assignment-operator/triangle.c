#include <stdio.h>

main(){
    float firstAngle, secondAngle, thirdAngle;

    printf("Enter First Angle: ");
    scanf("%f", &firstAngle);

    printf("Enter Second Angle: ");
    scanf("%f", &secondAngle);

    thirdAngle = 180 - (firstAngle + secondAngle);

    printf("Third Angle: %.2f", thirdAngle);
}