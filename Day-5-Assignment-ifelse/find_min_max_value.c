#include <stdio.h>

main(){
    int a, b;

    printf("Enter First Number: ");
    scanf("%d", &a);

    printf("Enter Second Number: ");
    scanf("%d", &b);

    if (a < b)
    {
        printf("The Minimum value is: %d", a);
    }else{
        printf("The Minimum value is: %d", b);
    }
    
}


// #include <stdio.h>

// main() {
//     int a, b;

//     printf("Enter First Number: ");
//     scanf("%d", &a);

//     printf("Enter Second Number: ");
//     scanf("%d", &b);

//     if (a > b) {
//         printf("The Maximum value is: %d\n", a);
//         printf("The Minimum value is: %d", b);
//     } else {
//         printf("The Maximum value is: %d\n", b);
//         printf("The Minimum value is: %d", a);
//     }
// }
