// Print all even numbers from 1 to 20.

#include <stdio.h>

main(){
    int num1, num2, i;

    printf("Enter Any Number1: ");
    scanf("%d", &num1);
    
    printf("Enter Any Number2: ");
    scanf("%d", &num2);

    printf("Even Number: ");
    for (i = num1; i <= num2; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
        
    }
    
}