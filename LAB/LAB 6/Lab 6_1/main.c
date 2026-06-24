#include<stdio.h>
#include <stdlib.h>

int sideofaTriangle(int a, int b, int c){

    a=a*a;
    b=b*b;
    c=c*c;

    if(c==a+b){
    return 1;
    }
    else{
        return 0;

    }

}

int main()
{
    int a,b,c;

    scanf("%d%d%d",&a,&b,&c);

        if(sideofaTriangle(a,b,c)==1){
          printf("true");
    }
    else{
        printf("false");

    }

    //sideofaTriangle(a,b,c); //function call

    return 0;
}
