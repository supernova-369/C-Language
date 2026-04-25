// #include <stdio.h>

// int main()
// {
//     char answer;
//     printf("Do you like bagels?(y/n)\n");
//     scanf(" %C", &answer);
    
//     if (answer=='y'||answer=='n'){
//         printf("Good Job, you didn't mess anything up");
//     }else{
//         printf("keyboard much?");
        
//     }
    
// }
 //if ((answer='y')||(answer='n')) double inverted commas nai chaale
    //if one of these is correct it will run even if both are correct it will run but if both are wrong then it won't
//Double quotes represent a string, not a single character.
//If you compare or store a single character → use ' '
//If you compare or store words or multiple characters → use " "



#include <iostream>

using namespace std;

int main() {
    
    int a;
    int b;
    int sum;
    
    cout << "Enter a number boss\n";
    //cout << is the replacement of printf() from C
    cin >> a;
    //cin >> is the replacement of scanf() from C 
    
    cout << "Enter another number boss\n";
    cin >> b;
    
    sum = a+b;
    /* cout << "The sum of both inserted numbers is %d",sum;
     this above is wrong statement since it displays %d as it is and not the actual result instead use --> */
     cout << "The sum of both inserted numbers is " << sum << endl;
    return 0;
}