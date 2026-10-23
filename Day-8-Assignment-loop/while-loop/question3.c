#include <stdio.h>
main(){
    int num, a = 1;
    printf("Enter any number: ");
    scanf("%d", &num);

    while (a <= num)
    {
        printf("%d ", a);
        a++;
    }
    
}