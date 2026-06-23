#include<stdio.h>
#include<stdlib.h>

int main(){
    char *mes=malloc(sizeof(char)*100);

    printf("enter a message:");

    int len=0;
    char c;

    while(!((c=getchar())=='\n')){
        *(mes+len)=c;
        len++;
    }

    //printf("%d",len);

    for(int i=len;i>=0;i--){
        printf("%c",*(mes+i));
    }

    return 0;
    
}