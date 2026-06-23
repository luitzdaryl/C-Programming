#include<stdio.h>
int main(){
    char first_name[100]={0},last_name[100]={0};
    int first_len=0,last_len=0;

    printf("enter a first name and a last name:");
    
    do{
        scanf("%c",&first_name[first_len++]);
    }while(first_name[first_len-1] != ' ');
    first_len--;

    do{
        scanf("%c",&last_name[last_len++]);
    }while(last_name[last_len-1] != '\n');
    last_len--;

    for(int i=0;i<last_len;i++){
        printf("%c",last_name[i]);
    }

    printf(", %c.",first_name[0]);

    return 0;
}