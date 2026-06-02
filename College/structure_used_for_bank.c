#include <stdio.h>
#include <string.h>

struct bank {
    int accno;
    char holder_name[50];
    float balance;
};

int main()
{
    int n;

    printf("Enter number of account holders: ");
    scanf("%d", &n);

    struct bank b[n];   // array of structures

    getchar(); // clear buffer before fgets

    // Input data
    for(int i = 0; i < n; i++)
    {
        printf("\nEnter details of account holder %d:\n", i+1);

        printf("Enter account number: ");
        scanf("%d", &b[i].accno);

        getchar(); // clear buffer

        printf("Enter holder name: ");
        fgets(b[i].holder_name, sizeof(b[i].holder_name), stdin);

        // Remove newline
        b[i].holder_name[strcspn(b[i].holder_name, "\n")] = '\0';

        printf("Enter balance: ");
        scanf("%f", &b[i].balance);

        getchar(); // clear buffer
    }

    // Display condition
    printf("\n--- Account holders with balance less than 5000 ---\n");

    for(int i = 0; i < n; i++)
    {
        if(b[i].balance < 5000)
        {
            printf("\nAccount Number: %d\n", b[i].accno);
            printf("Holder Name: %s\n", b[i].holder_name);
            printf("Balance: %.2f\n", b[i].balance);
        }
    }

    return 0;
}