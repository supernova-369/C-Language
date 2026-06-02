#include <stdio.h>

struct Address
{
    char city[20];
    int pincode;
};

struct Student
{
    char name[20];
    int sem;

    // Nested structure
    struct Address add;
};

int main()
{
    struct Student s1;

    printf("Enter student name: ");
    scanf("%s", s1.name);

    printf("Enter semester: ");
    scanf("%d", &s1.sem);

    printf("Enter city: ");
    scanf("%s", s1.add.city);

    printf("Enter pincode: ");
    scanf("%d", &s1.add.pincode);

    printf("\n--- Student Details ---\n");

    printf("Name: %s\n", s1.name);
    printf("Semester: %d\n", s1.sem);
    printf("City: %s\n", s1.add.city);
    printf("Pincode: %d\n", s1.add.pincode);

    return 0;
}