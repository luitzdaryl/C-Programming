#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    FILE *f;

    if((f=fopen("./10929.txt","r"))==NULL){
        printf("無法開啟檔案!\n");
		return 1;
    }

    char num[1000];

    while(fgets(num,1000,f) && !(num[0] == '0' && num[1] == '\0' )){

        // printf("%s",num);

        int odd=0;
        int even=0;
        int len=strlen(num);

        len--;

        for(int i=0;i<len;i++){
            if(i % 2){
                odd+=num[i]-'0';
            }else{
                even+=num[i]-'0';
            }
        }

        if(!(abs(odd - even) % 11 )){
            printf( "%s is a multiple of 11.\n", num );
        }else{
            printf( "%s is not a multiple of 11.\n", num );
        }
    }

    return 0;
    
}