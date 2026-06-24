#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool getValues(int a, int b, int c);
int main()
{
    srand(48763);
    int a,b,c;

    bool Result;

    for(int i=1;i<=10;i++){

        a=rand()%10;
        b=rand()%10;

        printf("How much is %d times %d?\n",a,b);
        scanf("%d",&c);

        Result=getValues(a, b, c);// calling the function

        while(Result==false) {
          int message;
          message=rand()%4+1;

          if(message==1){
            printf("No, Please try again.\n");
          }

          else if(message==2){
            printf("Wrong. Try once more.\n");
          }
           else if(message==3){
            printf("Don't give up.\n");
           }
          else{
            printf("No. Keep trying.\n");
          }
              scanf("%d", &c);

            Result=getValues(a, b, c);// calling the function
        }
        if(Result==true) {

            int message;
           message=rand()%4+1;

          if(message==1){
          printf("Very good!\n");
          }
          else if(message==2){
            printf("Excellent!\n");
        }
          else if(message==3){
            printf("Nice work!\n");
          }
      else{
        printf("Keep up the good work!\n");
      }
    }
    }
    return 0;
}

bool getValues(int a, int b, int c){

//c user input
//a and b are the random numbers

int mult=a*b;

   if(c==mult)
    return true;
   else
    return false;
}
