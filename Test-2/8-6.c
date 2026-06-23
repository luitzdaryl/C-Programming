#include<stdio.h>
#include<ctype.h>

int main(){
    char mes[100]={0};
    int len=0;

    printf("enter message:");

    do{
        scanf("%c",&mes[len++]);
    }while(mes[len-1]!='\n');
    len--;

    for(int i=0;i<len;i++){
        mes[i]=toupper(mes[i]);
        if(mes[i]=='A') mes[i]=4;
        else if(mes[i]=='B') mes[i]='8';
        else if(mes[i]=='E') mes[i]='3';
        else if(mes[i]=='I') mes[i]='1';        
        else if(mes[i]=='O') mes[i]='0';
        else if(mes[i]=='S') mes[i]='5';
    }
    
    for(int i=0;i<len;i++){
        printf("%c",mes[i]);
    }

    return 0;

}