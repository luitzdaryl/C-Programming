#include<stdio.h>

int main(){
    int marble,cases,num,dest,test=0,count,j;
    int arr[10001]={0};

    printf("enter number of marbles and cases: ");
    
    while(scanf("%d%d",&marble,&cases)!=EOF){
        if(marble==0 && cases==0){
            break;
        }

        for(int i=0;i<marble;i++){
            scanf("%d",&num);
            arr[num]++;
        }

        printf("CASE# %d:\n",++test);

        for(int i=0;i<cases;i++){
            scanf("%d",&dest);
            if(arr[dest]>0){
                for(j=1,count=1;j<dest;j++){
                    count+=arr[j];
                }
                printf("%d found at %d\n",dest,count);
            }else{
                printf("%d not found\n",dest);
            }
        }
    }
    return 0;
}