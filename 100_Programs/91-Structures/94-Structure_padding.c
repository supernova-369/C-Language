#include <stdio.h>

struct Demo
{
    char a;   // 1 byte

    // Compiler adds 3 bytes padding here
    // so int starts at proper memory boundary

    int b;    // 4 bytes

    char c;   // 1 byte

    // Compiler adds 3 bytes padding at end
};

int main()
{
    printf("Theoretical size (1 + 4 + 1) = 6 bytes\n");

    printf("Actual padded size = %lu bytes\n",
           sizeof(struct Demo));

    return 0;
}