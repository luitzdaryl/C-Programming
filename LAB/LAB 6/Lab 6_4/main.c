#include <stdio.h>
#include <math.h>

int getPentagonalNumber(int n); //function prototype

int main(){ // main function

    int counter=1; // the counter

    for (int i=1; i<=100; i++){
        printf("%7d",getPentagonalNumber(i));

             if(counter%10==0){
            printf("\n");
        }
          counter++; // incrementation
    }
    return 0;
}

int getPentagonalNumber(int n){

        n=n*(3*n-1)/2;

            return n;
}
