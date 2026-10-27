#include <stdio.h>

main(){
    int num;

    printf("Enter Any Number: ");
    scanf("%d", &num);

    int orgNum = num;
    int rev = 0;

    while (num != 0){
        int rem = num % 10;

        rev = rev * 10 + rem;

        num = num / 10;
    }
    (orgNum == rev)
        ? printf("%d is Palindrome Number", orgNum)
        : printf("%d is Not Palindrome Number", orgNum);
}
