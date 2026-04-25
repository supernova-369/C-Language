#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t t = time(NULL);
    struct tm date = *localtime(&t);

    printf("Current date is %d-%02d-%02d\n",
           date.tm_year + 1900,
           date.tm_mon + 1,
           date.tm_mday);

    printf("Current time is %02d:%02d:%02d\n",
           date.tm_hour,
           date.tm_min,
           date.tm_sec);

    return 0;
}
