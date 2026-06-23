#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){

    int i,j,k,direction;
    char board[10][10];
    const char letters[] = {'A', 'B', 'C', 'D', 'E',
                            'F', 'G', 'H', 'I', 'J',
                            'K', 'L', 'M', 'N', 'O',
                            'P', 'Q', 'R', 'S', 'T',
                            'U', 'V', 'W', 'X', 'Y', 'Z'};

    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            board[i][j]='.';
        }
    }

    i=0;
    j=0;
    k=0;

    board[i][j]=letters[k++];
    
    srand((unsigned)time(NULL));

    while(k<26){
        direction=rand()%4;
        switch(direction){
            case 0:if (board[i][j + 1] == '.'&&j!=9){
                    board[i][j +1] = letters[k];  //move right 
                    k++;j++;
                    }      
                    if (board[i][j + 1] != '.' && board[i + 1][j] != '.' && board[i - 1][j] != '.' && board[i][j - 1] != '.')
                    k = 27;
                    break;
            case 1:if(board[i-1][j]=='.'&&i!=0){
                    board[i-1][j]=letters[k];   //move down
                    k++;i--;
                    }
                    if (board[i][j + 1] != '.' && board[i + 1][j] != '.' && board[i - 1][j] != '.' && board[i][j - 1] != '.')
                    k = 27;
                    break;
            case 2:if(board[i+1][j]=='.'&&i!=9){
                    board[i+1][j]=letters[k];   //move up
                    k++;i++;
                    }
                    if (board[i][j + 1] != '.' && board[i + 1][j] != '.' && board[i - 1][j] != '.' && board[i][j - 1] != '.')
                    k = 27;
                    break;
            case 3:if(board[i][j-1]=='.'&&j!=0){
                    board[i][j-1]=letters[k];   //move left
                    k++;j--;
                    }
                    if (board[i][j + 1] != '.' && board[i + 1][j] != '.' && board[i - 1][j] != '.' && board[i][j - 1] != '.')
                    k = 27;
                    break;
        }
    }

    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            printf("%4c",board[i][j]);
        }
        printf("\n");
    }

    return 0;
}