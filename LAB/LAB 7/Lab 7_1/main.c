#include <stdio.h>
#include <stdlib.h>

int flip( );//function prototype
int main()
{
int side, toss;
int heads=0, tails=0;

for (toss=1; toss <=1000; toss++ ){

if(flip()==0){

        tails++;
    printf("Tails\n");
}
else{
    heads++;
    printf("Heads\n");
}
}

printf("%d %d\n", heads, tails );
//printf("tails was flipped %d times\n", tails );

return 0;

}
int flip( ){
    int i=rand() % 2;


        if (i==0)
             return 0;

        else
             return 1;

}
