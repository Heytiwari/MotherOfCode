#include <stdio.h>

main(){
    int a, b;

    printf("Enter First Number: ");
    scanf("%d", &a);

    printf("Enter Second Number: ");
    scanf("%d", &b);

    while (a <= b)
    {
        printf("%d ", a);
        a+=4;
    }
    
}