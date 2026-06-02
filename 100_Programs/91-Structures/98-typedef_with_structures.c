#include <stdio.h>

// Create alias Student for structure
typedef struct
{
    char name[20];
    int sem;
} Student;

int main()
{
    Student s1;

    printf("Enter name: ");
    scanf("%s", s1.name);

    printf("Enter semester: ");
    scanf("%d", &s1.sem);

    printf("\nStudent Details\n");

    printf("Name: %s\n", s1.name);
    printf("Semester: %d\n", s1.sem);

    return 0;
}

/*
typedef struct Student
{
    char name[20];
    int sem;
} Student;

Now this both are valid: 
Student s1;

struct Student s2;
*/
