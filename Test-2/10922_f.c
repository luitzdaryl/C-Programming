#include<stdio.h>
#include<string.h>

int main(){
    FILE *f;

    if ((f = fopen("./10922.txt", "r")) == NULL){
        printf("無法開啟檔案!\n");
        return 1;
    }

    char str[1000];
    int len=0,sum=0;

    while(fscanf(f,"%s\n",&str)!=EOF){
        if(str[0]=='0' && strlen(str)==1){
            break; 
        } 
            len = strlen(str);
            sum = 0;
        for(int i=0; i<len; i++){
            sum += (str[i] - '0');
        }
        if(sum%9!=0){
            printf("%s is not a multiple of 9.\n", str);
        }
        else {
            int class=1;
            int sum2=0;

            while(sum>9){
                sum2=0;
                 while(sum>0){
                    sum2+=sum%10;
                    sum/=10;
                }
                sum=sum2;
                class++;
            }
        printf("%s is a multiple of 9 and has 9-degree %d.\n", str, class);
        }
    }

    return 0;

}