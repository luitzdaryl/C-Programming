#include<stdio.h>
#include<math.h>

int main(){
    int line;
    
    printf("How many lines do you want to print?");

    int count=0,cases=1,ans;

    while(scanf("%d",&line)){
        if(line<0){
            break;
        // }else if(line==1){
        //     printf("Case %d: 0\n",cases);    
        }else {
            for(int i=0;i<line;i++){
                if(pow(2,i)>=line){
                    ans=i;
                    break;
                }
            }
            count++;
        }
        printf("Case %d: %d\n",count,ans);

    }

    return 0;

}