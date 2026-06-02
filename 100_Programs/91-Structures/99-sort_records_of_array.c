#include <stdio.h>

struct Student
{
    char name[20];
    int sem;
};

int main()
{
    int n;
    printf("Enter the number of student datas to enter : ");
    scanf("%d", &n);

    struct Student s[n], temp;

    for(int i = 0; i < n; i++)
    {
        printf("Enter name and semester: ");
        scanf("%s%d",
              s[i].name,
              &s[i].sem);
    }

    // Sorting
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(s[i].sem > s[j].sem)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("\nSorted Records\n");

    for(int i = 0; i < n; i++)
    {
        printf("%s %d\n",
               s[i].name,
               s[i].sem);
    }

    return 0;
}