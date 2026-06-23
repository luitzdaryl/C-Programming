#include<stdio.h>

int main(){
    char word[100];
    int len=0;

    printf("enter a word:");

    do{
        scanf("%c",&word[len]);
        len++;
    }while(word[len-1]!='\n');
    len--;

    for(int i=len;i>=0;i--){
        printf("%c",word[i]);
    }

    return 0;

}