#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct scientificNotation{
	double number;
	int exp;
};

int main() {
	int i=0;
	char nm1[100]={' '}, nm2[100]={' '};
	char ex1[100]={' '}, ex2[100]={' '};
	const char e[2]="e";
	double ANSWER1, ANSWER2, ANSWER3, ANSWER4;
	char userInput1[100]={' '}, userInput2[100]={' '};

	scanf("%s", userInput1);
	scanf("%s", userInput2);

	struct scientificNotation s1;
	struct scientificNotation s2;

	char *token1=strtok(userInput1, e);
	strcpy(nm1, token1);
	sscanf(nm1,"%lf",&s1.number);

	token1 = strtok(NULL, e);
	strcpy(ex1, token1);
	sscanf(ex1,"%d",&s1.exp);


    char *token2=strtok(userInput2, e);
	strcpy(nm2, token2);
	sscanf(nm2,"%lf",&s2.number);

	token2 = strtok(NULL, e);
	strcpy(ex2, token2);
	sscanf(ex2,"%d",&s2.exp);

	ANSWER1 = s1.number*pow(10, s1.exp) + s2.number*pow(10, s2.exp);
	ANSWER2 = s1.number*pow(10, s1.exp) - s2.number*pow(10, s2.exp);
	ANSWER3 = s1.number*pow(10, s1.exp) * s2.number*pow(10, s2.exp);
	ANSWER4 = (s1.number*pow(10, s1.exp)) / (s2.number*pow(10, s2.exp));

	while(ANSWER1>=1) {
		ANSWER1/=10;
		i++;
	}
	printf("%.5lfe%d\n", ANSWER1, i);
	i=0;
	while(ANSWER2>=1) {
		ANSWER2/=10;
		i++;
	}
        printf("%.5lfe%d\n", ANSWER2, i);
            i=0;

	while(ANSWER3>=1) {
		ANSWER3/=10;
		i++;
	}
        printf("%.5lfe%d\n", ANSWER3, i);
            i=0;

	while(ANSWER4>=1){
		ANSWER4/=10;
		i++;
	}
        printf("%.5lfe%d\n", ANSWER4, i);

	return 0;
}
