#include<stdio.h>

int main(){
    int num,index,count=0,max=0;
    char letters[26]={0};

    printf("How many line do you print?");
    scanf("%d",&num);

    char tem;

    while(count<=num){
        tem=getchar();
        if(tem=='\n'){
            count++;
        }else{
            if(tem>='a'&&tem<='z'){
                index=tem-'a';
            }else if (tem>='A'&&tem<='Z'){
                index=tem-'A';
            }else continue;

            letters[index]+=1;
            if(index>max){
                max=index;
            }
        }
    }

    for(index=max;index>0;index--){
        for(int i=0;i<26;i++){
            if(letters[i]==index){
                printf("%c %d\n",('A'+i),letters[i]);
            }
        }
    }

    return 0;

}