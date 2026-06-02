#include <stdio.h>

struct students
{
    char student_name[20];
    char iu_no[20];
    int sem;
    char subject[20];
    char div;
} info[20];

int main()
{
    int n;

    printf("How many Student DATA do you want to enter (MAX 20): ");
    scanf("%d", &n);

    if(n > 20)
    {
        printf("Maximum limit exceeded!");
        return 0;
    }

    // Input
    for(int i = 0; i < n; i++)
    {
        printf("\nEnter data of student %d\n", i + 1);

        printf("Enter student name: ");
        scanf("%s", info[i].student_name);

        printf("Enter student's IU number: ");
        scanf("%s", info[i].iu_no);

        printf("Enter semester: ");
        scanf("%d", &info[i].sem);

        printf("Enter subject: ");
        scanf("%s", info[i].subject);

        printf("Enter class division: ");
        scanf(" %c", &info[i].div);
    }

    // Output
    printf("\nThe data of students entered is:\n");

    for(int i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Name: %s\n", info[i].student_name);
        printf("IU Number: %s\n", info[i].iu_no);
        printf("Semester: %d\n", info[i].sem);
        printf("Subject: %s\n", info[i].subject);
        printf("Class Division: %c\n", info[i].div);
    }

    return 0;
}