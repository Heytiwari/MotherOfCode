#include <stdio.h>

main(){
    int num, a = 0, b = 1;
    // int c;

    printf("Enter Any Number: ");
    scanf("%d", &num);

    // for (int i = 1; i <= num; i++){
    //     printf("%d  ", a);
    //     c = a + b;
    //     a = b;
    //     b = c;
    // }


    //  for (int i = 1; i <= num; i++){
    //     printf("%d ", a);

    //     a = a + b;
    //     b = a - b;
    // }

     for (int i = 1; i <= num; i++){
        printf("%d ", a);

        a = a ^ b;
        b = a ^ b;
    }
    
}