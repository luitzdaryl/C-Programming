#include<stdio.h>
int main(){
    char first_word[100],second_word[100];
    int len=0;

    printf("enter first word:");

    char c;
    
    while(!((c=getchar())=='\n')){
        first_word[len]=c;
        len++;
    }

    printf("enter second word:");
    
    len=0;

    while(!((c=getchar())=='\n')){
        second_word[len]=c;
        len++;
    }

    int first_word_count[26]={0},second_word_count[26]={0};

    for(int i=0;i<len;i++){
        first_word_count[first_word[i]-97]++;
    }

    for(int i=0;i<len;i++){
        second_word_count[second_word[i]-97]++;
    }

    int true=1;

    for(int i=0;i<26;i++){
        if(first_word_count[i]!=second_word_count[i]){
            true=0;
        }
    }

    if(true==1){
        printf("the words are anagram.");
    }else{
        printf("the words are not anagram.");
    }
}