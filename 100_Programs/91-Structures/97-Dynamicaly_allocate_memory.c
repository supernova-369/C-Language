#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char name[20];
    int sem;
};

int main()
{
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // malloc() allocates memory dynamically
    // malloc() returns a void* (generic pointer)

    // (struct Student*)
    // converts that generic address into
    // a pointer of type struct Student*

    // n * sizeof(struct Student)
    // allocates memory for n student structures

    struct Student *ptr =
        (struct Student*) malloc(
            n * sizeof(struct Student));

    // Input
    for(int i = 0; i < n; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Name: ");
        scanf("%s", ptr[i].name);

        printf("Semester: ");
        scanf("%d", &ptr[i].sem);
    }

    // Output
    printf("\nStudent Details\n");

    for(int i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Name: %s\n", ptr[i].name);

        printf("Semester: %d\n",
               ptr[i].sem);
    }

    // Releases dynamically allocated memory
    free(ptr);

    return 0;
}