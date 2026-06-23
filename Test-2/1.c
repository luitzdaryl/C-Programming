#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    FILE *f;

    if ((f = fopen("./1.txt", "r")) == NULL){
        printf("無法開啟檔案!\n");
        return 1;
    }

    int num1;

    fscanf(f,"%d\n",&num1);
    printf("%d\n",num1);

    for(int i=0;i<num1;i++){
        float x;
        fscanf(f,"%f",&x);
        printf("%f ",x);
    }
    printf("\n");

    int num2;

    fscanf(f,"%d\n",&num2);
    printf("%d\n",num2);

    char str[200];

    for(int i=0;i<num2;i++){
        fscanf(f,"%s",str);
        printf("%s ",str);
    }
    printf("\n");

    int num3;

    fscanf(f,"%d\n",&num3);
    printf("%d\n",num3);

    int len;
    char c;
    char sen[100];

    for(int i=0;i<num3;i++){
        memset(sen,'\n',100);
        // char sen[100]={0};
        while (fscanf(f, "%c", &c) != EOF && c != '\n' && c != '\0') {
            sen[len++] = c;
        }
        len=len-2;
        for(int j=0;j<len;j++){
            printf("%c",sen[j]);
        }
        printf("\n");
        len=0;
    }

    return 0;

}