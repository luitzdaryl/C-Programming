#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(48763); //to ensure that judge accepts

    int secretNumber; //to store the random number
    char choice = ' '; // to choose y or n
    int userValue= -1;//the guess number from the user

    while(choice != 'n'){
    secretNumber = rand() % 1000 + 1;

        while(userValue != secretNumber){
        scanf("%d", &userValue);

            if (userValue > secretNumber)
                printf("High\n");
            else if (userValue < secretNumber)
                printf("Low\n");
            else{
                printf("Congratulations\n" );

                scanf(" %c",&choice);
                getchar();
            }
        }
    }

    return 0;
}
