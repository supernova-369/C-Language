//keyconcept: whenever you just make a simple array of char its hard to change because
 the name of the array  is a constant and you can't easily change constants however 
 whenever you make pointer to string this pointer right here  is a variable so you can easily  on left hand side since all this is doing storing address
   
//the reason that it is able to print this out on screen even tho it is technically a pointer because 
 what puts does it esssentially takes a string and start printing it on screen until it gets 0 terminator at the end

//This movie2 it's actually not even storing any characters or strings it's storing address 
 where this string begins, so when we print it out until you get to that no 0 so since this is indeed a variable what we can do is this  --

//we changed the pointer like every other variable such as floats, ints,char. 
 we didn't need to access every individual character, we didn't use strcpy we treated it pretty much as we wanted 


#include <stdio.h>

int main() {

    // movie1: array storing string, characters can be changed but array cannot be reassigned
    char movie1[] = "the return of buckyman!";

    // movie2: pointer to string literal, characters cannot be modified but pointer can move
    char *movie2 = "bucky is awesome I love him!";

    puts(movie2);   // prints first string

    movie2 = "New movie title";   // pointer now points to new string

    puts(movie2);   // prints updated string

    return 0;
}



// movie1 is a char array → stores the whole string directly, characters can be modified
// movie2 is a pointer to a string literal → points to a string in read-only memory
// You can reassign movie2 to point to another string, but you cannot change its characters
// Arrays cannot be reassigned, pointers can be pointed to a new location
