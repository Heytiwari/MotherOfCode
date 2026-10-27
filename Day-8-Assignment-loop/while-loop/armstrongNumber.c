#include <stdio.h>

main(){
    int num;
    
    printf("Enter Any Number: ");
    scanf("%d", &num);
    
    int orgNum = num;
    int sum = 0;

    while (num != 0){
        int rem = num % 10;

        sum = sum * rem * rem * rem;

        num = num / 10;
    }
    (orgNum == sum)
                ?printf("%d is Armstrong Number", orgNum)
                :printf("%d is not Armstrong Number", orgNum);
}