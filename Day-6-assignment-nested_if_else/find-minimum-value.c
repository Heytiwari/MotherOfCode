#include <stdio.h>

main(){
    int a, b;

    printf("Enter Number: ");
    scanf("%d", &a);

    printf("Enter Number: ");
    scanf("%d", &b);

    (a<b)
    ?printf("%d is minimum Number.", a)
    :printf("%d is minimum Number.", b);
}