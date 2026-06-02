#include <stdio.h>
#include <string.h>

union student {
    int roll_no;
    char name[50];
};

int main()
{
    union student s;

    // Store and display name
    printf("Enter student name: ");
    fgets(s.name, sizeof(s.name), stdin);

    // Remove newline
    s.name[strcspn(s.name, "\n")] = '\0';

    printf("\nName stored in union: %s\n", s.name);

    // Now store roll number (overwrites name)
    printf("\nEnter roll number: ");
    scanf("%d", &s.roll_no);

    printf("Roll number stored in union: %d\n", s.roll_no);

    // Trying to print name again (will be garbage)
    printf("Name after storing roll number: %s\n", s.name);

    return 0;
}