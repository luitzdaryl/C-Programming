#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int main(){
    char *str=malloc(sizeof(char) * 100);
    strcpy(str, "how are you");
    char *del=" ";
    char **strings = (char**) malloc(sizeof(char*)*100);
    int size = 0;
    char *ptr=strtok(str,del);

    while(ptr!=NULL){
        // printf("%s\n",ptr);
        strings[size] = (char*) malloc(sizeof(char)*100);
        strcpy(strings[size], ptr);
        size++;
        ptr=strtok(NULL,del);
    }   

    for (int i = 0; i < size; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;

}