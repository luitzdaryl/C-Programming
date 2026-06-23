#include<stdio.h>

int main(){
    int number,starting_day,i;

    printf("enter number of days in month:");
    scanf("%d",&number);
    printf("enter starting day of the week:");
    scanf("%d",&starting_day);

    for(i=1;i<=starting_day-1;i++){
        printf("   ");
    }
    for(i=1;i<=number;i++){
        printf("%3d",i);
        if(i%7==(7+1)-starting_day){
            printf("\n");
        }
    }
}