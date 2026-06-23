#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int count=0;
    int len=0;

    printf("enter a sentence:");

    do{
        scanf("%c",&str[len]);
        len++;
    }while(str[len-1]!='\n');
    len--;

    for(int i=0;i<len;i++){
        if(str[i]==' '||str[i]=='\n'){
            count++;
        }
    }

    // printf("%d %d ",len,count);

    printf("There are %d words.",count+1);

    return 0;
}