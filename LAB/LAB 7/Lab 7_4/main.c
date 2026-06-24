#include <stdio.h>

int LCM(int x, int y, int res); // function prototype

int main() {

	int firstNumber,secondNumber, result;

	scanf ("%d %d", &firstNumber, &secondNumber);
	        result = (firstNumber > secondNumber) ? firstNumber : secondNumber;// to check if first number is greater than second number


	printf ("%d ",  LCM(firstNumber, secondNumber, result));

    return 0;
}

int LCM (int x, int y, int res) {

	while (1) {
		if (res % x == 0 && res % y == 0) {
			return res;
			break;
		} else {
			++res;
		}
	}
}
