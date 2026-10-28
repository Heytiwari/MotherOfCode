#include <stdio.h>

main(){
    int num, a = 0, b = 1, c;

    printf("Enter Any Number: ");
    scanf("%d", &num);

    for (int i = 0; i <= num; i++){
        printf("%d  ", a);
        c = a + b;
        a = b;
        b = c;
    }
    
}