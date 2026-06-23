#include<stdio.h>

void pay_amount(int dollars,int *twenties,int *tens,int *fives,int *ones){

    while(dollars>20){
        (*twenties)++;
        dollars -= 20;
    }

    while(dollars>10){
        (*tens)++;
        dollars-=10;
    }

    while(dollars>5){
        (*fives)++;
        dollars-=5;
    }

    *ones=dollars;
    
}

int main(){
    int dollar=0,twenty=0,ten=0,five=0,one=0;

    printf("enter a dollar mount:");
    scanf("%d",&dollar);

    pay_amount(dollar,&twenty,&ten,&five,&one);

    printf("20$:%d\n",twenty);
    printf("10$:%d\n",ten);
    printf("5$:%d\n",five);
    printf("1$:%d\n",one);
    

}