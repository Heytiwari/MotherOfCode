/*
    write a program to print the following series for n terms:

    1 2 3 4 7 11 16 22.....
    Each term is the previous term plus an increment that increases by 1 each time.
    Example:
    Enter any number: 7
    output
        1 2 3 4 7 11 16 22
*/

#include <stdio.h>

main(){
    int num;

    printf("Enter Any Number: ");
    scanf("%d", &num);
    int a = 1;
    int i;
    for (i = 1; i <= num; i++){
        printf("%d ", a);
        a += i;
    }
    
}