#include <stdio.h>

main()
{
    int a, b, c, d;

    printf("Enter First Number: ");
    scanf("%d", &a);

    printf("Enter Second Number: ");
    scanf("%d", &b);

    printf("Enter Third Number: ");
    scanf("%d", &c);

    printf("Enter Fourth Number: ");
    scanf("%d", &d);

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("%d is maximum value.", a);
            }
            else
            {
                printf("%d is maximum value.", d);
            }
        }
        else
        {
            if (c > d)
            {
                printf("%d is maximum value.", c);
            }
            else
            {
                printf("%d is maximum value.", d);
            }
        }
    }
    else
    {
        if (b > c)
        {
            if (b > d)
            {
                printf("%d is maximum value.", b);
            }
            else
            {
                printf("%d is maximum value.", d);
            }
        }
        else
        {
            if (c > d)
            {
                printf("%d is maximum value.", c);
            }
            else
            {
                printf("%d is maximum value.", d);
            }
        }
    }
}