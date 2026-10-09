#include <stdio.h>

main()
{
    float p, r, n, si;

    printf("Enter Principle Amount\t: ");
    scanf("%f", &p);

    printf("Enter Rate of Interest\t: ");
    scanf("%f", &r);

    printf("Enter Number of Month\t: ");
    scanf("%f", &n);

    si = (p*r*n)/100;

    printf("Simple Interest = %.2f", si);
}