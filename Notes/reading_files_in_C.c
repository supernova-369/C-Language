#include <stdio.h>

int main() {
   
   FILE * fpointer;
   fpointer = fopen("bacon.txt","r");
   char singleline[150];
   
   while(!feof(fpointer)){
       // file end of file(feof)
       fgets(singleline,150,fpointer);
       puts(singleline);
       // we are puting so the user see it (print karva)
       // the new line space is because your computer  "line \n" thats why you have space even though your file doesn't have one
   }
   
   fclose(fpointer);

    return 0;
}