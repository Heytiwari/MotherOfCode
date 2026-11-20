// Find the sum of even numbers from 1 to 50.

#include <stdio.h>

main(){
    int num1, num2, i;

    printf("Enter First Number: ");
    scanf("%d", &num1);

    printf("Enter Second Number: ");
    scanf("%d", &num2);

    int sum = 0;

    printf("Total numbers divisible by 2: ");
    for (i = num1; i <= num2; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
            sum += i;
        }
        
    }
    printf("\nTotal of sum between 2 numbers: %d", sum);
}