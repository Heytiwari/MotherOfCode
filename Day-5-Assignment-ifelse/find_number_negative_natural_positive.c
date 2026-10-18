#include <stdio.h>

main(){
    int num;

    printf("Enter Number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("This is Nigative Number.");
    }
    else if (num > 0)
    {
        printf("This is Positive Number.");
    }
    else
    {
        printf("This is Natural Number.");
    }
    
}