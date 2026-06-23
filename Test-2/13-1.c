#include<stdio.h>
#include<string.h>

#define wordlen 20

char word[wordlen+1],smallest[wordlen+1],largest[wordlen+1];

void get_first_word(void);
void get_another_word(void);
void get_word(void);

int main(){
    
    get_first_word();

    while(strlen(word)!=4){
        get_another_word();
    }

    printf("\nSmallest word:%s\n",smallest);
    printf("Largest word:%s",largest);

    return 0;

}

void get_first_word(){

    get_word();
    strcpy(smallest,word);
    strcpy(largest,word);

}

void get_word(){

    printf("enter word:");
    scanf("%20s",word);

}

void get_another_word(){

    get_word();

    if(strcmp(word,smallest)<0){
        strcpy(smallest,word);
    }else if(strcmp(word,largest)>0){
        strcpy(largest,word);
    }

}