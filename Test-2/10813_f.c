#include<stdio.h>

int main(){
    FILE *f;

    if ((f = fopen("./10813.txt", "r")) == NULL) 
	{
		printf("無法開啟檔案!\n");
		return 1;
	}

    int testcases;

    fscanf(f,"%d\n",&testcases);
    // printf("%d",testcases);

    while(testcases--){
        int bingo[5][5],num[80];

        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                if(i==2 && j==2){
                    bingo[i][j]=0;
                }else{
                    fscanf(f,"%d",&bingo[i][j]);
                }
            }
        }

        // for(int i=0;i<5;i++){
        //     for(int j=0;j<5;j++){
        //         printf("%d",bingo[i][j]);
        //     }
        //     printf("\n");
        // }

        for (int k = 0; k < 75; ++ k) {
            fscanf(f,"%d", &num[k]);
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