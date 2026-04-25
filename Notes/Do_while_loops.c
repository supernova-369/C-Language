#include <stdio.h>

int main(){
    float grade=0;
    float ScoreEntered=0;
    float numberoftests=0;
    float average=0;
    printf("Press 0 when compete \n");
    do{
        printf("Tests:%.0f Average : %.2f \n",numberoftests,average);
        printf("\n Enter test score: ");
        scanf("%f", &ScoreEntered);
        grade+= ScoreEntered;
        numberoftests++;
        average = grade / numberoftests;
    } while (ScoreEntered!=0);
    return 0;
}