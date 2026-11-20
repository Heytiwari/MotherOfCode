// Find the sum of numbers from 1 to 10.

#include <stdio.h>

main()
{
    int num1, num2, i;

    printf("Enter first Number: ");
    scanf("%d", &num1);
    printf("Enter second Number: ");
    scanf("%d", &num2);

    int sum = 0;

    for (i = num1; i <= num2; i++)
    {
        sum += i;
    }
    printf("%d ", sum);
    
}