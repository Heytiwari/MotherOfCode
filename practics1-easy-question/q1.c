// Print numbers from 1 to 10 using a loop

#include <stdio.h>

main(){
    int num, i;

    printf("Enter any number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        printf("%d ", i);
    }
    
}