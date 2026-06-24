#include <stdio.h>

int main() {

  int number, reversed=0;
  int remainder, originalNumber;

    scanf("%d", &number);
    originalNumber = number;


    while (number != 0) {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number /= 10;
    }

    if (originalNumber == reversed)
        printf("Yes");
    else
        printf("No");

    return 0;
}
