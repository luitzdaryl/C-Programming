#include<stdio.h>

int main()
{
    int firstNumber, secondNumber;
    int n1, n2;

    scanf("%d %d", &firstNumber, &secondNumber);

    if(firstNumber % secondNumber == 0)
        printf("Yes");

    else
        printf("No");

    return 0;
}
