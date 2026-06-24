#include <stdio.h>
#include <stdlib.h>

int main()
{
    double distance, fuel, price,cost;

    scanf("%lf%lf%lf",&distance,&fuel,&price);

    cost= (distance/fuel)*(price);
    printf("%.2lf\n", cost);
    return 0;
}
