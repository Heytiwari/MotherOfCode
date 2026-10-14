#include <stdio.h>

int main() {
    int birthOfYear, currentYear = 2026, currentAge;

    printf("Enter Birth Year: ");
    scanf("%d", &birthOfYear);

    currentAge = currentYear - birthOfYear;

    printf("This is your current age: %d\n", currentAge);

}