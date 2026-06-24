#include <stdio.h>
#include <stdlib.h>

int main()
{
    double velocity, acceleration, L;

    scanf("%lf%lf",&velocity,&acceleration);

    L=(velocity*velocity)/(2*acceleration);

    printf("%.3lf\n", L);
    return 0;
}
