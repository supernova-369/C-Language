#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int player[5]={58,66,68,71,87};

    int goals[5]={26,39,25,29,31};

    int gamesplayed[5]={30,30,28,30,26};

    float ppg[5];
    float bestPPG=0.0;
    int bestplayer;
    
    for(i=0;i<5;i++){

        ppg[i]=(float)goals[i]/(float)gamesplayed[i];

        printf("%d \t %d \t \t %.2f \n",player[i], gamesplayed[i],ppg[i]);

        if(ppg[i]>bestPPG){
            bestPPG=ppg[i];
            bestplayer=player[i];
        }
    }
    printf("\n The best player is %d \n", bestplayer);
    
    return 0;
}