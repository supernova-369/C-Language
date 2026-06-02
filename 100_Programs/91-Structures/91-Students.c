#include <stdio.h>

struct students 
{
    char student_name[20];
    int enroll_number;
    int batch_year;
    char subject[30];
    char div;
}std;

int main()
{
    printf("Enter student name : ");
    scanf("%s", &std.student_name);

    printf("Enter the enrollment number of the student : ");
    scanf("%d", &std.enroll_number);

    printf("Enter the current year : ");
    scanf("%d", &std.batch_year);

    printf("Enter the subject name : ");
    scanf("%s", &std.subject);

    printf("Enter class division : ");
    scanf(" %c", &std.div);

    printf("\n=====Here's the detail of the student========\n");
    printf(" Name of the student : %s\nEnrollment number of the student : %d\nCurrent year : %d\nName of the subject : %s\nClass division of the student :  %c\n", &std.student_name, &std.enroll_number, &std.batch_year, &std.subject, &std.div);

    return 0;
}