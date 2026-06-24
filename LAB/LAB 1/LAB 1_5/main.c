#include <stdio.h>
#include <stdlib.h>

int main()
{
    double M, Temp1, Temp2, Energy;

    scanf("%lf%lf%lf",&M,&Temp1,&Temp2);

    Energy= M*(Temp2-Temp1)*4184;

    printf("%.1lf",Energy);
    return 0;
}
