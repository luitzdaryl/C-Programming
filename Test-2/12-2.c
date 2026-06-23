#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    char *mes = malloc(sizeof(char) * 100);

    printf("enter a message:");

    int len = 0;
    char c;

    do{
        scanf("%c",&c);
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) { 
            mes[len++] = c;
        }
    }while(c!='\n');
    
    
    //printf("%d",len);

    for(int i=0;i<len;i++){
        *(mes+i)=tolower(*(mes+i));
    }

    // for(int i=0;i<len;i++){
    //     printf("%c",*(mes+i));
    // }

    printf("\n");

    int flag = 1;

    for(int i=0;i<len/2;i++){
        if(*(mes+i)!=*(mes+len-i-1)){
            flag = 0;
        }
    }

    if(flag==1){
        printf("palindrome");
    }else{
        printf("not a palindrome");
    }

    return 0;

}