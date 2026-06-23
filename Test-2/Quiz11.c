#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int id;
    char name[100];
    int age;
    float score;
}Player;

int  main(){
    FILE *in=fopen("./input.txt","r");
    FILE *cmd=fopen("./cmd.txt","r");

    int count=0;

    fscanf(in,"%d\n",&count);

    Player *players=(Player*)malloc(count*sizeof(Player));
    
    for(int i=0;i<count;i++){
        fscanf(in,"%d,",&players[i].id);
        char c;
        int len=0;
        do{
            fscanf(in,"%c",&c);
            players[i].name[len++]=c;
        }while(c!=',');

        players[i].name[len-1]='\0';

        fscanf(in,"%d,%f\n",&players[i].age,&players[i].score);
    }

    int cmdindex=0;

    while(fscanf(cmd,"%d\n",&cmdindex)!=EOF){
        int i=0;
        for(;i<count && cmdindex != players[i].id;i++);
        if(i==count){
            printf("Player data not found.\n\n");
            continue;
        }
        printf("ID: %d\nName: %s\nAge: %d\nScore: %g\n\n",players[i].id,players[i].name,players[i].age,players[i].score);
    }

    system("pause");

    return 0;

}