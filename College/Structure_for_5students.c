#include <stdio.h>

struct student {
    char student_name[20];
    int student_enrollment_no;
};

int main()
{
    struct student s[5];

    //Input Data
    for(int i = 0; i < 5; i++)
    {
        printf("Enter the detail of student %d ------->\n", i+1);
        puts("Enter the name of the student :");
        fgets(s[i].student_name, sizeof(s[i].student_name), stdin);

        printf("Enter student's enrollment number : \n");
        scanf("%d", &s[i].student_enrollment_no);
        
        getchar(); // clear input buffer
    }

    printf("Details of all five students is here.");
    for(int i = 0; i < 5; i++)
    {
        printf("\n--------- Details of Student %d ---------\n", i+1);
        printf("Name of the student %s :\n", s[i].student_name);
        printf("Enrollment number of the student : %d \n", s[i].student_enrollment_no);
    }

    return 0;
}