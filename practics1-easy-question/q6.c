// print the multiplication table of any number entered by the user.

#include <stdio.h>

main(){
    int num, i;

    printf("Enter any number: ");
    scanf("%d", &num);

    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    
}