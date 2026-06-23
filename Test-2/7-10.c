#include<stdio.h>
#include<ctype.h>

int main(){
    char word[100]={0};
    int len=0;

    printf("enter a sentence:");

    do{
        scanf("%c",&word[len++]);
    }while(word[len-1] != '\n');
    len--;

    for(int i=0;i<len;i++){
        word[i]=tolower(word[i]);
    }

    int vowel=0;

    for(int i=0;i<len;i++){
        if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u'){
            vowel++;
        }
    }

    printf("your sentence contains %d vowels.",vowel);

    return 0;

}