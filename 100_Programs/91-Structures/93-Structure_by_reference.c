#include <stdio.h>

struct Student
{
    char name[20];
    int sem;
};

void display(struct Student *s)
{
    printf("Name: %s\n", s->name);
    printf("Semester: %d\n", s->sem);
}

int main()
{
    struct Student s1 = {"Yash", 3};

    display(&s1);

    return 0;
}