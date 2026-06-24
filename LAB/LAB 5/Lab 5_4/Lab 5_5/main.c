#include <stdio.h>

int main(){

    for(int i=1;i<=7;i++){
        for(int j=i;j<=7;j++)
        {   if(j!=i)
            printf("%d %d\n",i,j);
        }

    }
    printf("21");

    return 0;
}
