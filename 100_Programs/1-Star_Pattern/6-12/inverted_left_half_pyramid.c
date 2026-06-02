#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k;
    int star_pattern_number;
    printf("Enter the number for star pattern");
    scanf("%d", &star_pattern_number);
    for(i=0;i<star_pattern_number;i++){
        for(j=0;j< i; j++){
            printf(" ");
        }
        for(k=star_pattern_number; k>i;k--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}