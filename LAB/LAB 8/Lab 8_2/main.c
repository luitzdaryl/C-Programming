#include<stdio.h>
#include<stdlib.h>

int globalCheck;

int isPrime(int numBer){

     if(globalCheck==1){
        return 1;
      }
      else if(numBer%globalCheck==0) {
      return 0;
      }
      else {
      globalCheck = globalCheck-1;
      isPrime(numBer);
    }
  }


int main(){
  int userValue;
  int prime;

  scanf("%d", &userValue);

  globalCheck = userValue/2;
  prime = isPrime(userValue);

  if(prime==1)
    printf("True");
  else
    printf("False");

  return 0;
}

