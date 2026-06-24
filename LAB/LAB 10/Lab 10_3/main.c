#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void emptyBoard(int plate[][3]); // Function prototype to print an empty board
bool check(int plate[][3]); // Function prototype to check whether a player won or not

int main(){
	int row, column; // row and column
	int plate[3][3]={0};
	int counter=0;

	emptyBoard(plate);


	while(true) {

		if(counter%2==0){

			printf("Enter a row for player X:\n");
			scanf("%d", &row);

			printf("Enter a column for player X:\n");
			scanf("%d", &column);

			plate[row][column]=1;
		}
		else{
			printf("Enter a row for player O:\n");
			scanf("%d", &row);

			printf("Enter a column for player O:\n");
			scanf("%d", &column);

			plate[row][column]=2;
		}
		counter++;

		emptyBoard(plate); // calling the board function

		if(counter>=5){
			if(check(plate)==true)
                break;
		}
		if(counter==9){
			printf("draw.");
			break;
		}
	}

	return 0;
}
// Printing the empty board
void emptyBoard(int plate[][3]){
	int i, j;

	for(i=0;i<3;i++) {
	    printf("-------------\n");

	    for(j=0;j<3;j++){
	        printf("| ");

	        if(plate[i][j]==0) printf("  ");

	        else if(plate[i][j]==1) printf("X ");
	        else printf("O ");
	    }
	    printf("|\n");
	}
	printf("-------------\n");
	printf("\n");
}

// Checker

bool check(int plate[][3]){
	int i, j;

	for(i=0; i<3; i++){

		if(plate[i][1]!=0 && plate[i][0] == plate[i][1] && plate[i][0] == plate[i][2]){
			if(plate[i][1] == 1)
                printf("X player won.");

			else if(plate[i][1]==2)
                printf("O player won.");
			return true;
		}
	}
	for(j=0; j<3; j++){

		if(plate[1][j]!=0 && plate[0][j] == plate[1][j] && plate[0][j]==plate[2][j]){
			if(plate[1][j] == 1)
                printf("X player won.");

			else if(plate[1][j] == 2)
                printf("O player won.");
			return true;
		}
	}
	if(plate[1][1]!=0 && plate[0][0] == plate[1][1] && plate[0][0] == plate[2][2]){
		if(plate[1][1]== 1)
            printf("X player won.");

		else if(plate[1][1] == 2)
            printf("O player won.");
		return true;
	}
	if(plate[1][1]!=0 && plate[0][2] == plate[1][1] && plate[0][2] == plate[2][0]){
		if(plate[1][1] == 1)
            printf("X player won.");

		else if(plate[1][1] == 2)
            printf("O player won.");
		return true;
	}
	return false;
}
