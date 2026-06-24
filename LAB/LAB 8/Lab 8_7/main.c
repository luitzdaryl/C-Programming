#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int arithmetic();
int main()
{
    srand(48763);
    int a,b,c;
    //c user input
   //a and b are the random numbers

    int Result;

    int arithChoice; // to pick a type of arithmetic problem to study
    scanf("%d",&arithChoice);

    for(int i=1;i<=10;i++){

        a=arithmetic();
        b=arithmetic();

        if(arithChoice==1){
             printf("How much is %d plus %d?\n",a,b);
             Result=a+b;
             scanf("%d",&c);
        }

        else if(arithChoice==2){
             printf("How much is %d minus %d?\n",a,b);
             Result=a-b;
             scanf("%d",&c);
        }

        else if(arithChoice==3){
             printf("How much is %d times %d?\n",a,b);
             Result=a*b;
             scanf("%d",&c);
        }
        else if(arithChoice==4){
             int message;
             message=rand()%3+1;

             if(message==1){
                    printf("How much is %d plus %d?\n",a,b);
                    Result=a+b;
                    scanf("%d",&c);
             }

             else if(message==2){
                    printf("How much is %d minus %d?\n",a,b);
                    Result=a-b;
                    scanf("%d",&c);
             }

             else if(message==3){
                    printf("How much is %d times %d?\n",a,b);
                    Result=a*b;
                    scanf("%d",&c);
             }
        }

        if(Result!=c) {
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
        }
        if(Result==c) {

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

int arithmetic(){

int numberGenerator=rand()%10;

return numberGenerator;
}
