#include <stdio.h>
#include <stdlib.h>

int reversed(int a){

    int i, ans=0;
    while(a!=0)
        {
            i=a%10;
            a/=10;
            ans+=i;
            ans*=10;
        }
        ans/=10;
        return ans;
    }

int main()
{

        int a;

            scanf("%d",&a);
            printf("%d\n", reversed(a));


    return 0;
}
