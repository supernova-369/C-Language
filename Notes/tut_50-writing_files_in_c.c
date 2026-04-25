#include <stdio.h>
#include <stdlib.h>

int main() {
    
    /* there are 2 types of file first one is sequential access files
    and random access files first one means data in order and 2nd means you store anywhere */
    
    FILE * fpointer;
    fpointer = fopen("bacon.txt","w");
    //if you run it more than once it overwrites the old file since it creating it from new
    fprintf(fpointer,"I love her\n");
    
    fclose(fpointer);
    
    
    return 0;
}