
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a,b,c;
    double discriminant;
    double x1,x2;


    scanf("%lf%lf%lf",&a,&b,&c);

    // The calculation of the discriminant
    discriminant=(b*b)-(4*a*c);

        if (discriminant>0)
        {
            x1=(-b+sqrt(discriminant))/(2*a);
            x2=(-b-sqrt(discriminant))/(2*a);

            printf("%.2lf %.2lf",x1,x2);
        }
            else if (discriminant==0)
            {
                x1=-b/(2*a);
                x2=x1;

                printf("%.2lf %.2lf",x1,x2);
            }
            else
            {
                printf("-1\n");

            }

            return 0;
}


