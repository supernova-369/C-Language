#include <stdio.h>

int main() 
{
   
   FILE * fpointer;
   fpointer = fopen("bacon.txt","a");
   
   fprintf(fpointer,"\n- a hikew1 by bucky roberts");
   
   fclose(fpointer);

    return 0;
}