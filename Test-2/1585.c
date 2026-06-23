#include<stdio.h>
#include<string.h>

int main(){
    int testcase,score=0;
    char ooxx[100];

    printf("How many test cases do you have?");
    scanf("%d",&testcase);

    while(testcase--){
        scanf("%s",&ooxx);

        int len=strlen(ooxx);
        int count=0;

        for(int i=0;i<len;i++){
            if(ooxx[i]=='o'||ooxx[i]=='O'){
                count++;
                score+=count;
            }else{
                count=0;
            }
        }
        printf("%d\n",score);
        score=0;
    }

    return 0;

}