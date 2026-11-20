// Print numbers from 10 to 1 in reverse order

#include <stdio.h>

main(){
    int num, i;

    printf("Enter any number: ");
    scanf("%d", &num);

    for (i = num; i >= 1; i--)
    {
        printf("%d ", i);
    }
    
}
