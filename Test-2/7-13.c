#include<stdio.h>

int main(){
    char sentence[100]={0};
    int len=0,count=0;

    printf("enter a sentence:");

    do{
        scanf("%c",&sentence[len++]);
    }while(sentence[len-1]!='\n');
    len--;

    for(int i=0;i<len;i++){
        if(sentence[i]==' '){
            count++;
        }
    }

    float ans=0;

    ans=(float)(len-count)/(count+1);

    // printf("%d %d ",len-count,count+1);

    printf("%.2f ",ans);

    return 0;

}