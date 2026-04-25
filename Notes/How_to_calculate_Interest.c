#include <stdio.h>

int main(){
    
    int pageviews=0;
    pageviews = pageviews=1;
    

    //now pageviews=1
    printf("page views : %d \n", pageviews);
    
    pageviews=pageviews=2;
    printf ("page views : %d \n",pageviews);
    /* output --> page views:1
                  page views:2
                  page views:3*/
    
    float balance = 1000.00;
    balance*=1.1;
    //balance= balance*1.1;
    //both methods above are the exact same thing 
    

    printf("balance : %f \n", balance);
    balance*=1.1 ;
    
    printf("balance: %f \n",balance);
    balance*=1.1;
    
    printf("balance: %f \n",balance);
    
/*output --> balance: 1100.000
                 balance:1210.000
                 balance:1331.000
*/
    return 0;
}