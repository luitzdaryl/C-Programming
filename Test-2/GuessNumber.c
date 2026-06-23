#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define max_number 1000

void number_generator(){
    srand((unsigned)time(NULL));
}

int new_secret_number(){
    return rand()%max_number+1;
}

void read_guess(int secret_number){
    int guess,num_guess=0;

    for(;;){
        num_guess++;
        printf("enter guess:");
        scanf("%d",&guess);
        if(guess==secret_number){
            printf("you won in %d guesses!\n",num_guess);
            return;
        }else if(guess<secret_number){
            printf("too low,try again.\n");
        }else if(guess>secret_number){
            printf("too high,try again.\n");
        }
    }
}

int main(){
    char command;
    int secret_number;
    printf("guess secret number between 1 and %d.\n",max_number);

    number_generator();

    do{
        secret_number=new_secret_number();
        printf("A new number has been chosen.\n");
        read_guess(secret_number);
        printf("play again?");
        scanf("%d",&command);
        printf("\n");
    }while(command=='y'||command=='Y');

    return 0;

}
