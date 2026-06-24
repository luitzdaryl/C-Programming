#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	int numbersofTime[37]={0}; // initialization to zero
	srand(48763); // the seed value of the srand

	int i, j; // container for incrementation
	int firstDie; // the first die
	int secondDie; // the second die

	for(i=0; i<36000; i++){

		firstDie=rand()%6+1;
		secondDie=rand()%6+1;


		int newFirstDie= firstDie - 1;
		numbersofTime[secondDie + newFirstDie * 6]++;
	}

	printf("%d\n", 48763); //  the seed value of the srand

	for(i=1; i<=36; i++){

		printf("%d ", numbersofTime[i]);

		if(i%6==0){
           printf("\n");
		}

	}

	return 0;
}
