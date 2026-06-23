#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define r 6440
#define pi 3.1415926

int main(){
    int dis,angle;
    char c[5];

    while(scanf("%d%d%s",&dis,&angle,&c)){
        if (strcmp(c,"min")==0){
            angle/=60;
        }
        if(angle>180){
            angle=360-angle;
        }
        float s=(r+dis)*angle*(pi/180);
        float chord=2 * (r+dis) * sin(angle * pi / 360);
        printf("%.6f %.6f\n",s,chord);
    }

    return 0;

}