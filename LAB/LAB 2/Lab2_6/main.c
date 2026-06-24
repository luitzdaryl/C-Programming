#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x1, y1, x2, y2, r1, r2, distance;

    scanf("%f %f %f", &x1, &y1, &r1);
    scanf("%f %f %f", &x2, &y2, &r2);
    /*Circle2 is inside circle1 if the distance between the two center <=r1-r2 and circle2 overlaps circle1 if
    the distance between the two center <= r1+r2, otherwise not overlap.*/

     distance = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

    if(distance<=r1-r2){
        printf("Inside");
    }
    else if(distance<=r1+r2){
        printf("Overlap");
    }

    else{
        printf("Not overlap");
    }
    return 0;
}
