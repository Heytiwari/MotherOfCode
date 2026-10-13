#include <stdio.h>

main(){
    float x, y, ans;

    printf("Enter X Value: ");
    scanf("%f", &x);

    printf("Enter Y Value: ");
    scanf("%f", &y);

    ans = (x * x) - (2 * x * y) + (y * y);

    printf("Answer: %.2f", ans);

}