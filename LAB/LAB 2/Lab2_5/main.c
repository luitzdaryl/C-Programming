#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x0, y0, x1, y1, x2, y2, result;

    scanf("%f %f", &x0, &y0);
    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);

    result=(x1-x0)*(y2-y0)-(x2-x0)*(y1-y0);

    if(result>0){
         printf("left");
    }
    else if (result==0){
        printf("on");
    }
    else if(result<0){
        printf("right");
    }

    return 0;
}
