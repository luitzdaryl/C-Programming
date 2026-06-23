#include<stdio.h>

double average(double x,double y){
    return (x+y)/2;
}

int main(){
    double a,b,c;

    printf("enter three numbers:");
    scanf("%lf%lf%lf",&a,&b,&c);

    printf("average of %g and %g : %g\n",a,b,average(a,b));
    printf("average of %g and %g : %g\n",b,c,average(b,c));
    printf("average of %g and %g : %g\n",a,c,average(a,c));

    return 0;
    
}

