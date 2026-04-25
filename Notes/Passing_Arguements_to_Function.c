#include <stdio.h>
#include <stdlib.h>

void converttodollars(float euro);

int main(){
    
    float europrice1=1.00;
    float europrice2=5.25;
    converttodollars(europrice1);
    converttodollars(europrice2);
    converttodollars(21.30);
    return 0;
}

void converttodollars(float euro){
    float usd = euro*1.37;
    printf("%.2f Euros = %.2f USD \n", euro , usd);
    
    return;
}