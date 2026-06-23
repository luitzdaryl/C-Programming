#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char *str=malloc(sizeof(char) * 100);
    strcpy(str, "17 89 19 90 20 892 12 7");
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

    int val[100]={0};

    for (int i = 0; i < size; i++) {
        // printf("%s\n", strings[i]);
        val[i]=atoi(strings[i]);
    }

    int sum=0;
    int average=0;

    for(int i=0;i<size;i++){
        sum+=val[i];
    }

    average=sum/size;

    printf("sum = %d\n",sum);
    printf("average = %d",average);

    return 0;
}