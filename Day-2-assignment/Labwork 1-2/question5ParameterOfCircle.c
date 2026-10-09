#include <stdio.h>


main()
{
    const float PI = 3.14;
    float r, perimeter;

    printf("Enter Radious\t: ");
    scanf("%f", &r);

    perimeter = 2 * PI * r;

    printf("Area of Perimeter = %.2f", perimeter);
}