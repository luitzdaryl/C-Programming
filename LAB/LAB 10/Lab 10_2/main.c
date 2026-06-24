#include <stdio.h>
#include <stdlib.h>

int main(){

    int floor[50][50]={0}; // initialize

	int userCommand;
	int forwardMoves; // move forward
	int draw=0, dir=0;
    int i=0, j=0, k; // variables for the loops
    int x, y; // variables for the loops

	//printf("Enter command: ");

	scanf("%d", &userCommand);
	while(userCommand!=9) {

            if(userCommand==1){
                draw=0;
            }
            else if(userCommand==2){
                draw=1;
            }
            else if(userCommand==3){
                dir = dir+ 4;
				dir++;
            }
            else if(userCommand==4){
                dir = dir + 4;
				dir--;
            }
            else if(userCommand==5){

				scanf("%d", &forwardMoves);


				for(k=1; k<=forwardMoves; k++) {
					if(draw==1) {
						if(dir%4==0) {
							floor[i][j]=1;
							j++;
							floor[i][j]=1;
						}
						if(dir%4==1) {
							floor[i][j]=1;
							i++;
							floor[i][j]=1;
						}
						if(dir%4==2) {
							floor[i][j]=1;
							j--;
							floor[i][j]=1;
						}
						if(dir%4==3) {
							floor[i][j]=1;
							i--;
							floor[i][j]=1;
						}
					}

					if(draw==0) {
						if(dir%4==0) {
							j++;
						}
						else if(dir%4==1) {
							i++;
						}
						else if(dir%4==2) {
							j--;
						}
						else if(dir%4==3) {
							i--;
						}
					}
				}

            }
            else if(userCommand==6){
                for(x=0; x<50; x++) {
					for(y=0; y<50; y++) {
						printf("%d", floor[x][y]);
					}
					puts("");
				}
            }

		scanf("%d", &userCommand);
	}

	return 0;
}
