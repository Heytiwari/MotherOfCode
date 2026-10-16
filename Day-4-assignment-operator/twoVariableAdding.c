#include <stdio.h>

main(){
    float a, b;

    printf("Enter First Value: ");
    scanf("%f", &a);

    printf("Enter Second Value: ");
    scanf("%f", &b);

    float addition, subtraction, multiplication, division;

    addition = a + b;
    subtraction = a - b;
    multiplication = a * b;
    division = a / b;

    printf("Addition: %.2f\n", addition);
    printf("Subtraction: %.2f\n", subtraction);
    printf("Multiplication: %.2f\n", multiplication);
    printf("Division: %.2f\n", division);

}