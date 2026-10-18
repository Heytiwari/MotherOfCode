
#include <stdio.h>

int main() {
    char studentName[50];

    char subjectName1[30], subjectName2[30], subjectName3[30], subjectName4[30], subjectName5[30];

    float subjectNumber1, subjectNumber2, subjectNumber3, subjectNumber4, subjectNumber5;
    float totalSubjectNumber, percentage;

    printf("Enter Student Name: ");
    scanf("%s", &studentName);

    printf("Enter Subject Name 1: ");
    scanf("%29s", subjectName1);
    printf("Enter Subject Number 1: ");
    scanf("%f", &subjectNumber1);

    printf("Enter Subject Name 2: ");
    scanf("%29s", subjectName2);
    printf("Enter Subject Number 2: ");
    scanf("%f", &subjectNumber2);

    printf("Enter Subject Name 3: ");
    scanf("%29s", subjectName3);
    printf("Enter Subject Number 3: ");
    scanf("%f", &subjectNumber3);

    printf("Enter Subject Name 4: ");
    scanf("%29s", subjectName4);
    printf("Enter Subject Number 4: ");
    scanf("%f", &subjectNumber4);

    printf("Enter Subject Name 5: ");
    scanf("%29s", subjectName5);
    printf("Enter Subject Number 5: ");
    scanf("%f", &subjectNumber5);

    totalSubjectNumber = subjectNumber1 + subjectNumber2 + subjectNumber3 + subjectNumber4 + subjectNumber5;

    printf("\nStudent Name: %s", studentName);
    printf("%s\t = %.2f\n", subjectName1, subjectNumber1);
    printf("%s\t = %.2f\n", subjectName2, subjectNumber2);
    printf("%s\t = %.2f\n", subjectName3, subjectNumber3);
    printf("%s\t = %.2f\n", subjectName4, subjectNumber4);
    printf("%s\t = %.2f\n", subjectName5, subjectNumber5);

    printf("Total Subject Marks: %.2f/500\n", totalSubjectNumber);

    percentage = (totalSubjectNumber / 500) * 100;

    printf("Student Total Subject Percentage: %.2f%%\n", percentage);

}
