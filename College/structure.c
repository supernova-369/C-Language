#include <stdio.h>
#include <string.h>

struct state {
    char state_name[50];
    int number_of_district;
    int total_population;
};

int main()
{
    struct state state1;

    // Input state name
    printf("Enter the name of your state: ");
    fgets(state1.state_name, sizeof(state1.state_name), stdin);

    // Remove newline from fgets
    state1.state_name[strcspn(state1.state_name, "\n")] = '\0';

    // Input number of districts
    printf("Enter the number of districts: ");
    scanf("%d", &state1.number_of_district);

    // Input total population
    printf("Enter the total population: ");
    scanf("%d", &state1.total_population);

    // Output
    printf("\n--- State Details ---\n");
    printf("State Name: %s\n", state1.state_name);
    printf("Number of Districts: %d\n", state1.number_of_district);
    printf("Total Population: %d\n", state1.total_population);

    return 0;
}
/*
fgets() → for strings
scanf() → for integers
*/