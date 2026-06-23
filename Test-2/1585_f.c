#include<stdio.h>

int main(){
    FILE *f;

    if ((f = fopen("./1585.txt", "r")) == NULL){
        printf("無法開啟檔案!\n");
        return 1;
    }

    int testcases;
    
    fscanf(f,"%d\n",&testcases);

    int ooxx[100];
    char c;

    while(testcases--){
        int len=0;
        while (fscanf(f, "%c", &c) != EOF && c != '\n' && c != '\0') {
            ooxx[len++] = c;
        }
        // len=len-2;

        // for(int i=0;i<len;i++){
        //     printf("%c",ooxx[i]);
        // }
        // printf("\n");

        int count = 0;
        int score = 0;

        for(int i=0;i<len;i++){
            if(ooxx[i]=='o'||ooxx[i]=='O'){
                count++;
                score+=count;
            }else{
                count=0;
            }
        }
        printf("%d\n",score);
    }
}