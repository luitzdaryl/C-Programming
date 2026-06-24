#include <stdio.h>
#include <stdlib.h>

int main(){
    int userValue;
    int rows, i, j; //as global variable for the for loops

    //get the value from the user
    scanf("%d",&userValue);

    // for loops
    for(rows=userValue; rows>=1;rows--){
        for(i=rows; i>=1;i--){
            printf("%d ",i);

            if (i==1){
                for(j=2;j<=rows;j++){
                    printf("%d ",j);
                }
            }
        }
        printf("\n");
    }

    return 0;
}
