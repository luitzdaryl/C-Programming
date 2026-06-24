#include<stdio.h>


int main()
{
    int h; // day of the week
    int q; //day of the month
    int m; // month
    int j; // the year/100
    int k; // the year of the century (%100)

    scanf("%d",&k);
    scanf("%d",&m);
    scanf("%d",&q);


 if(m==1)
  {
    m= 13;
    k--;
  }
  if (m==2)
  {
    m=14;
    k--;
  }
    k=k%100;
    j=j/100;

    h=(q+(26*(m+1)/10) + k+(k/4)+(j/4)+5*j)%7;

    if(h==0){
       printf("Saturday");
    }
    if(h==1){
       printf("Sunday");
    }

    if(h==2){
       printf("Monday");
    }

    if(h==3){
       printf("Tuesday");
    }

    if(h==4){
       printf("Wednesday");
    }

    if(h==5){
       printf("Thursday");
    }

    if(h==6){
       printf("Friday");
    }

    return 0;

}


