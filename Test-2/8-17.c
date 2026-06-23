#include<stdio.h>

int main() {

    printf("This program creates a magic sqaure of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");

    int size;
    printf("Enter size of magic square: ");
    scanf("%d", &size);

    if(size%2==0){
        printf("invalid size");
        return 0;
    }

    int magic[99][99];
    int start = (size / 2); // The middle column
    int max = size * size;  // The final number
    magic[0][start] = 1;    // Place the number one in the middle of row 0

    int row;
    int col;
    int next_row;
    int next_col;
    int i;
    for (i = 2, row = 0, col = start; i < max + 1; i++) {
        if ((row - 1) < 0) {        // If going up one will leave the top
            next_row = size - 1;    // Go to the bottom row
        }
        else { next_row = row - 1; } // Otherwise go up one

        if ((col + 1) > (size - 1)) {   // If column will leave the side
            next_col = 0;               // Wrap to first column 
        }                                                                         
        else { next_col = col + 1; }    // Otherwise go over one 

        if (magic[next_row][next_col] > 0) {   // If that position is taken
            if (row > (size - 1)) {            // If going to row below leaves bottom
                next_row = 0;                  // Go back to the top 
            }                                                                     
            else {                                                                
                next_row = row + 1; // Go to the row below
                next_col = col;     // But stay in same column
            }                                                                     
        }                                                                         
        row = next_row;
        col = next_col;
        magic[row][col] = i; // Put the current value in that position 
    }                                                                             
                                                
    int j;                                                                        
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("%4d", magic[i][j]);
        }
        printf("\n");
    }                                                                             
    return 0;                                                                     
}