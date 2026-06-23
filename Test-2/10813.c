#include<stdio.h>

int main(){
    int testcase;
    int bingo[5][5],num[80];

    printf("How many testcases do ypu have?");
    scanf("%d",&testcase);

        while(testcase--){

            for(int i=0;i<5;i++){
                for(int j=0;j<5;j++){
                    if(i==2 && j==2){
                        bingo[i][j]=0;
                    }else{
                        scanf("%d",&bingo[i][j]);
                    }
                }
            }

            for (int k = 0; k < 75; ++ k) {
                scanf("%d", &num[k]);
            }
        
            int flag = 0;

            for (int k = 0; k < 75;k++) {
                for (int i = 0; i < 5; i++) {
                    int count = 0;
                    for (int j = 0; j < 5; j++) {
                        if(num[k]==bingo[i][j]){
                            bingo[i][j]=0;
                        }
                        if (bingo[i][j] == 0) {
                            count ++;
                        }
                    }
                    if (count == 5) {
                        flag = 1;
                        break;
                    }
                }
                
                for (int i = 0; i < 5; i++) {
                    int count = 0;
                    for (int j = 0; j < 5; j++) {
                        if(num[k]==bingo[j][i]){
                            bingo[i][j]=0;
                        }
                        if (bingo[j][i] == 0) {
                            count ++;
                        }
                    }
                    if (count == 5) {
                        flag = 1;
                        break;
                    }
                }
                
                if (!bingo[0][0] && !bingo[1][1] && !bingo[3][3] && !bingo[4][4]) {
                    flag = 1;
                }
                
                if (!bingo[0][4] && !bingo[1][3] && !bingo[3][1] && !bingo[4][0]) {
                    flag = 1;
                }
                    
                if (flag) {
                    printf("BINGO after %d numbers announced\n", k+1);
                    break;
                }
            }
        }

    return 0;

}