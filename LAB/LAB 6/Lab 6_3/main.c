#include <stdio.h>
#include <stdlib.h>

int isEven(int number); //function prototype

int main()
{
    int userValue;

    scanf("%d",&userValue);

    // while loop for the sentinel and calculation
    while(userValue!=0)
    {
        if (isEven(userValue)==1)
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }

        scanf("%d",&userValue);
    }
return 0;
}
int isEven(int number){

         if (number%2==0){
              return 1;
                    }
         else{
              return 0;
             }
}
