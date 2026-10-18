# include <stdio.h>

main(){
    char studentName [50];

    char subjectName1 [50], subjectName2 [50], subjectName3 [50];

    int subjectNumber1, subjectNumber2, subjectNumber3, totalNumber;
    
    float percentage;

    printf("Enter Student Name: ");
    scanf("%s", &studentName);

    printf("Enter Subject Name: ");
    scanf("%s", &subjectName1);

    printf("Enter Subject Number: ");
    scanf("%d",&subjectNumber1);

    printf("Enter Subject Name: ");
    scanf("%s", &subjectName2);

    printf("Enter Subject Number: ");
    scanf("%d", &subjectNumber2);

     printf("Enter Subject Name: ");
    scanf("%s", &subjectName3);

    printf("Enter Subject Number: ");
    scanf("%d", &subjectNumber3);

    totalNumber = subjectNumber1 + subjectNumber2 + subjectNumber3;

    percentage = (totalNumber / 300.0) * 100;

    printf("Student Name: %s\n", studentName);
    printf("%s = %d\n", subjectName1, subjectNumber1);
    printf("%s = %d\n", subjectName2, subjectNumber2);
    printf("%s = %d\n", subjectName3, subjectNumber3);
    printf("Total Number: %d\n", totalNumber);
    printf("Percentage: %.2f\n", percentage);

    if ((percentage >= 91) && (percentage <= 100))
    {
        printf("Grade: A+");
    }
    else if ((percentage >=81) && (percentage <= 90))
    {
        printf("Grade: A");
    }
    else if ((percentage >=71) && (percentage <= 80))
    {
        printf("Grade: B+");
    }
    else if ((percentage >=61) && (percentage <= 70))
    {
        printf("Grade: B");
    }
    else if ((percentage >=51) && (percentage <= 60))
    {
        printf("Grade: C+");
    }
    else if ((percentage >=41) && (percentage <= 50))
    {
        printf("Grade: C");
    }
    else if ((percentage >=33) && (percentage <= 40))
    {
        printf("Grade: D");
    }
    else
    {
        printf("Grade: Fail");
    }

    
    

}