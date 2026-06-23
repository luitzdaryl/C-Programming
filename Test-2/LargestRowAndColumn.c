#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
    int matrix[5][5]={0};
    int row=0,column=0,max_row=0,max_column=0,row_num,column_num;

    srand((unsigned)time(NULL));

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            matrix[i][j]=rand()%2;
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            row+=matrix[i][j];
            if(row>max_row){
                max_row=row;
                row_num=i;
            }
        }
        row=0;
    }

    for(int j=0;j<5;j++){
        for(int i=0;i<5;i++){
            column+=matrix[i][j];
            if(column>max_column){
                max_column=column;
                column_num=j;
            }
        }
        column=0;
    }

    printf("the first row and column is %d and %d.",row_num+1,column_num+1);

    return 0;

}