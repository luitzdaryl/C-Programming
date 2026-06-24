#include <stdio.h>
#include <math.h>

int main()
{
    float result,i,value;

    for(i=1; i<1000; i++)
    {
        value=1/(sqrt(i)+sqrt(i+1));
        result+=value;
    }

    printf("%.4f\n",result);

    return 0;
}
