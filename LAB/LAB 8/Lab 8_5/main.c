#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randFunction();// function prototype

int main(){
    srand(48763);
    int a,b,c,mult;
    int count=0,AVG=0,wrong_counter=0,right_counter=0;

    int number,num;

    while (count<=9)
    {
        a=randFunction();
        b=randFunction();

        mult=a*b;// multiplication
          printf("How much is %d times %d?\n",a,b);
              scanf("%d",&c);// get the answer from the user

        while (mult!=c){
        num = rand()% 4 + 5; // plus 5 to compensate for modulus result of zero

        switch(num){
        case 5:
        printf("No, Please try again.\n");
        break;
        case 6:
        printf("Wrong. Try once more.\n");
        break;
        case 7:
        printf("Don't give up.\n");
        break;
        case 8:
        printf("No. Keep trying.\n");
        break;
        }
        wrong_counter++;

        scanf("%d",&c);
    }

    if (c==mult)
    {
        number = rand()%4;
        switch(number)
        {
        case 0:
        printf("Very good!\n");
        break;
        case 1:
        printf("Excellent!\n");
         break;
        case 2:
        printf("Nice work!\n");
         break;
        case 3:
        printf("Keep up the good work!\n");
         break;
        }
        right_counter++;
    }
    AVG = wrong_counter + right_counter;
    if(AVG>10)
        {
            break;
            }
  }
  if((right_counter/AVG) < 0.75)
  {
     printf("Please ask your teacher for extra help.\n");
  }
   else if((right_counter/AVG)>= 0.75)
   {
    printf("Congratulations, you are ready to go to the next level!\n");
   }
    return 0;
}

int randFunction(){

int number=rand()%10;

return number;
}
