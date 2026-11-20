// Count the total digits of a number. ex: 12345 => 4 digits

#include <stdio.h>

main(){
    int num, i;

    printf("Enter Any Number: ");
    scanf("%d", &num);

    int digits = 0;

    for (i = 1; num > 0; i++)
    {
        num = num / 10;
        digits++;
    }
    printf("Digits: %d", digits);
}

