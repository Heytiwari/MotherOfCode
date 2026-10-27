#include <stdio.h>

main(){
    int num;
    int sum = 0;

    printf("Enter Any Number: ");
    scanf("%d", &num);

    while (num != 0){
        int rem = num % 10;

        sum = sum * rem * rem * rem;

        num = num / 10;
    }
    (num == sum)
                ?printf("%d is Armstrong Number", num)
                :printf("%d is not Armstrong Number", num);
}