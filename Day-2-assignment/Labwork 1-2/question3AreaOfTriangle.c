#include <stdio.h>

main()
{
    float b, h, area;

    printf("Enter base\t: ");
    scanf("%f", &b);

    printf("Enter height\t: ");
    scanf("%f", &h);

    area = 0.5 * b * h;

    printf("Area of triangle = %.2f", area);
}