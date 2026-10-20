#include <stdio.h>

main(){
    int a, b, c;

    printf("Enter a First Number: ");
    scanf("%d", &a);

    printf("Enter a Second Number: ");
    scanf("%d", &b);

    printf("Enter a Third Number: ");
    scanf("%d", &c);

    (a < b)
        ?(a < c)
            ?printf("%d is Minimum Value.", a)
            :printf("%d is Minimum Value.", c)
        : (b < c)
            ?printf("%d is Minimum Value.", b)
            :printf("%d is Minimum Value.", c);
}