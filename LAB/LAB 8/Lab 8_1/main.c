#include <stdio.h>
#include <stdio.h>

long int Combination(long int n, long int p); // function prototype

int main ()
{
    long int n, p;
  //get the inputs from the user

    scanf("%ld",&n);
    scanf("%ld",&p);

    printf ("%ld", Combination (n, p));
}

long int Combination(long int n, long int p){

    if (p == 0 || n == p){
        return 1;
    }
    else {
       return Combination (n - 1, p - 1) + Combination (n - 1, p);
    }

}
