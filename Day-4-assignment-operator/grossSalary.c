#include <stdio.h>

main(){
    float baseSalary ,grossSalary;
    int hra = 10, da = 5, ta = 8;

    printf("Enter Basic Salary: ");
    scanf("%f", &baseSalary);

    grossSalary = baseSalary + (baseSalary * hra / 100) + (baseSalary * da / 100) + (baseSalary * ta /100);

    printf("Base Salary: Rs.%.2f\n", baseSalary);
    printf("House Rent: Rs.%d\n", hra);
    printf("Daily Allounce: Rs.%d\n", da);
    printf("Travel: Rs.%d\n", ta);


    printf("Gross Salary: Rs.%.2f ", grossSalary);
    
}