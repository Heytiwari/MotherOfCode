#include <stdio.h>

main(){
    int a, b;

    printf("Enter First Number: ");
    scanf("%d", &a);

    printf("Enter Second Number: ");
    scanf("%d", &b);

    printf("Before Swapping: \n");

    printf("A : %d\n", a);
    printf("B : %d\n", b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("After Swapping: \n");

    printf("A : %d\n", a);
    printf("B : %d", b);
}