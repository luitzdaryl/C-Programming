#include<stdio.h>
#include<string.h>

#define max_remind 50
#define msg_len 60

int read_line(char str[],int n){
    int ch,i=0;

    while((ch=getchar())!='\n'){
        if(i<n){
            str[i++]=ch;
        }
    }

    str[i]='\0';
    return i;

}

int main(){
    char reminders[max_remind][msg_len+3];
    char day_str[3],msg_str[msg_len+1];
    int day,i,j,num_remind=0;

    for(;;){
        if(num_remind==max_remind){
            printf("--no space left--\n");
            break;
        }

        printf("enter day reminder:");
        scanf("%2d",&day);

        if(day==0){
            break;
        }

        sprintf(day_str,"%2d",day);
        read_line(msg_str,msg_len);

        for(i=0;i<num_remind;i++){
            if(strcmp(day_str,reminders[i])<0){     //is day_str < reminders[i] ?
                break; 
            }
        }

        for(j=num_remind;j>i;j--){
            strcpy(reminders[j],reminders[j-1]);
        }

        strcpy(reminders[i],day_str);
        strcat(reminders[i],msg_str);      //string concatenation

        num_remind++;

    }

    printf("\nDay Reminder\n");
    for(i=0;i<num_remind;i++){
        printf("%s\n",reminders[i]);
    }

    return 0;

}