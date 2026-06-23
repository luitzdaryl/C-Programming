#include<stdio.h>
#include<stdlib.h>

int main(){
    int cases,num,i;
    int relatives[3000]={0};

    printf("How many cases do you have?");
    scanf("%d",&cases);

    while(cases--){
        scanf("%d",&num);

        for(i=0;i<num;i++){
            scanf("%d",&relatives[i]);
        }

        for(i=0;i<num;i++){
            int tmp=relatives[i];
            int tmp2=i;

            for(int j=i+1;j<num;j++){
                if(tmp>relatives[j]){
                    tmp=relatives[j];
                    tmp2=j;
                }
            }

            relatives[tmp2]=relatives[i];
            relatives[i]=tmp;
        }

        int mid=relatives[num/2];
        int sum=0;

        for(i=0;i<num;i++){
            sum+=abs(mid-relatives[i]);
        }

        printf("%d\n",sum);

    }

    return 0;

}