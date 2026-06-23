#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#pragma warning(disable:4996)  

int main(){
    int testcases;

    while(scanf("%d",&testcases)!=EOF){
        int count[2001]={0};
        char sentence[2001][30],ld[75];

        for(int i=0;i<testcases;i++){
            scanf("%s",sentence[i]);
            gets(ld);
        }
        for(int i=0;i<testcases;i++){
            for(int j=i+1;j<testcases;j++){
                if(strcmp(sentence[i],sentence[j])==0){
                    count[i]++;
                    sentence[j][0]='\n';
                }
            }
        }
        for(int i=0;i<testcases-1;i++){
            for(int j=i+1;j<testcases;j++){
                if(sentence[j]=='\0') continue;
                if(strcmp(sentence[i],sentence[j])>0){
                    int k;
                    strcpy(ld,sentence[i]);
                    strcpy(sentence[i],sentence[j]);
                    strcpy(sentence[j],ld);
                    k=count[i];
                    count[i]=count[j];
                    count[j]=k;
                }
            }
        }
        for(int i=0;i<testcases;i++){
            if(sentence[i][0]!='\n'){
                printf("%s %d\n",sentence[i],count[i]+1);
            }
        }
    }
    return 0;
}