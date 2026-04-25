#include <stdio.h>
#include <stdlib.h>

int main(){
    
    FILE *fPointer;
    fPointer = fopen("bacon.txt", "w+");

    /*w → Open a file for writing.
    + → Also allow reading from the same file.*/

    fputs("I ate  3 pumpkins today", fPointer);
    fseek(fPointer, 23 , SEEK_SET);

    //SEEK_SET start at the begining of the file

    fputs(" munchkins on Friday", fPointer);    
    fseek(fPointer, 0 , SEEK_END);
    fputs(" top of a mountain", fPointer);
    
    rewind(fPointer);                           // go to beginning for reading
    // it is same as fseek(fPointer, 0, SEEK_SET);
    char buffer[100];                           // create array to store text
    fgets(buffer, sizeof(buffer), fPointer);    // read file content
    printf("%s\n", buffer);                     // print content on screen
    fclose(fPointer);                           // finally close the file
    return 0;

}