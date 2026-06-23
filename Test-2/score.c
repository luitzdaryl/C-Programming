#include<stdio.h>

int main(){
    int question,score=0;

    printf("how many questions did you finish:");
    scanf("%d",&question);

    if(question<=10){
        score=question*6;
    } else if(question>10 && question<=20){
        score=(question-10)*2+10*6;
    } else if(question>20 && question<=40){
        score=(question-40)*1+20*2+10*6;
    }

    printf("%d\n",score);

}