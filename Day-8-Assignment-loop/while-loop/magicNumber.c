#include <stdio.h>

main(){
    int num, sum = 0, mul = 1, rem;

    printf("Enter Any Number: ");
    scanf("%d", &num);

    int orgNum = num;

    while (num != 0){
        rem = num % 10;
        sum += rem;
        mul *= rem;
        num = num / 10;
    }
    (sum == mul)
        ?printf("%d is Magic Number.", orgNum)
        :printf("%d is not Magic Number.", orgNum);
    
}