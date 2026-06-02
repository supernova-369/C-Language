#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "bucky.h"

int main()
{

    struct user bucky;
    struct user emily;

    bucky.userID = 1;
    // dot operator is used to access individual elements or items inside your structure technically member
    emily.userID = 2;
    
    puts("Enter the first name of user 1");
    fgets(bucky.firstname , sizeof(bucky.firstname), stdin);
    // REMOVE newline added by fgets
    bucky.firstname[strcspn(bucky.firstname, "\n")] = '\0';
    
    puts("Enter the first name of user 2");
    fgets(emily.firstname, sizeof(emily.firstname), stdin);
            
    emily.firstname[strcspn(emily.firstname, "\n")]='\0';
    /*
    syntax --> fgets(where_to_store, size_of_storage, stdin)
    --> where_to_store  -> variable/array to store input
    --> size_of_storage -> maximum characters allowed (including '\0')
    --> stdin           -> standard input (keyboard), similar to cin in C++
    */
    
    
    // modify input stored INSIDE the structure
    for (int i = 0; bucky.firstname[i] != '\0'; i++) {
        bucky.firstname[i] = tolower(bucky.firstname[i]);
    }

    if (strcmp( bucky.firstname, "bucky")==0){
        //strcmp() → only correct way to compare strings in C
        //if (strcmp(...) == 0) → checks string equality
        printf("User 1 id is %d \n", bucky.userID);
        }else {
            printf("You stupid mind your own business!\n");
        }


    for(int i=0; emily.firstname[i]!='\0';i++){
        emily.firstname[i]=tolower(emily.firstname[i]);
    }    

    if (strcmp(emily.firstname,"emily")==0){
        printf("User 2 id is %d \n", emily.userID);
    } else{
        printf("Don't poke your nose in everyone bruh!");
    }

    return 0;

}