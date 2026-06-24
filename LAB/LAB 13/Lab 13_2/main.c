#include<stdio.h>
#include<stdlib.h>

struct complex {
	double realNumber;
	double imgNumber;
};

int main() {
	struct complex number1;
	struct complex number2;
	double x1, x2, x3, x4;
	char c, i;
    double ANSWER1, ANSWER2;

    // get the values from the user

	scanf("%lf%c%lf%c", &x1, &c, &x2, &i);
	scanf("%lf%c%lf%c", &x3, &c, &x4, &i);

	number1.realNumber=x1;
	number1.imgNumber=x2;
	number2.realNumber=x3;
	number2.imgNumber=x4;

	// output the answers

	ANSWER1=number1.realNumber+number2.realNumber;
	ANSWER2=number1.imgNumber+number2.imgNumber;

	printf("%.1lf+%.1lfi", ANSWER1, ANSWER2);

	return 0;
}
