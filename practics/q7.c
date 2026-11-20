// Count how many numbers are divisible by 3 between 1 nad 30.

#include <stdio.h>

main(){
    int num1, num2, i;
    int count = 0;

    printf("Enter First Number: ");
    scanf("%d", &num1);

    printf("Enter Second Number: ");
    scanf("%d", &num2);

    printf("Total numbers divisible by 3 of count: ");
    for (i = num1; i <=num2; i++)
    {
        if (i % 3 == 0)
        {
            printf("%d ", i);
            count++;
        }
        
    }
    printf("\nTotal numbers divisible by 3: %d", count);
    
}