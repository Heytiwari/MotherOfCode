#include <stdio.h>

main(){
    float a, b;

    printf("Enter First Number: ");
    scanf("%f", &a);

    printf("Enter Second Number: ");
    scanf("%f", &b);

    printf("Before Swapping: ");

    printf("%.2f", a);
    printf("%.2f", b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("After Swapping: ");

    printf("%.2f", a);
    printf("%.2f", b);
}