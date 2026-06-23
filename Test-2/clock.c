#include<stdio.h>
int main(){
    int min,sec;

    printf("enter a 24-hour time:(min:sec)");
    scanf("%d:%d",&min,&sec);

    if(min>12){
        min-=12;
    }

    printf("equivalent 12-hour time: %d:%d",min,sec);
    
}