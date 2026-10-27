#include <stdio.h>
main(){
    int num, length = 0;

    printf("Enter Any Number: ");
    scanf("%d", &num);

    while (num != 0){
        num = num / 10;
        length++;
    }
    printf("Length: %d", length);
}