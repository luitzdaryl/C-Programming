#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <string.h>


int main() {
    
    srand(time(NULL));

    int r1, r2, r3, r4, r5, r6;
    char *article[] = {"the" , "a" , "one" , "some", "any"};
    char *noun[] = {"boy" , "girl" , "dog" , "town", "car"};
    char *verb[] = {"drove" , "jumped" , "ran" , "walked", "skipped"};
    char *preposition[] = {"to" , "from" , "over" , "under", "on"};

    r1 = rand() % 6;
    r2 = rand() % 6;
    r3 = rand() % 6;
    r4 = rand() % 6;
    r5 = rand() % 6;
    r6 = rand() % 6;

    printf("%s %s %s %s %s %s\n", article[r1], noun[r2], verb[r3], preposition[r4], article[r5], noun[r6]);
    
    return 0;

}