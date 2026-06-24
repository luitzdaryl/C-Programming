#include <stdbool.h>
#include <stdio.h>

int gcd(int n, int m)
{
    int gcd, remainder;

    while (n != 0)
    {
        remainder = m % n;
        m = n;
        n = remainder;
    }

    gcd = m;

    return gcd;
}

int main (int argc, const char * argv[])
{

    int number1, number2;
    int newNumber1, newNumber2;

    scanf("%d/%d", &number1, &number2);


    newNumber1 = number1 / gcd(number1, number2);
    newNumber2 = number2 / gcd(number1, number2);

    printf("%d/%d", newNumber1, newNumber2);
}
