#include <stdio.h>

main(){
    int num;
    int i = 1, sum = 0;

    printf("Enter Any Number: ");
    scanf("%d", &num);

    while (i <= num)
    {
        sum = sum + i;
        i++;
    }
    printf("Sum : %d", sum);    
}