#include<stdio.h>
#include<stdlib.h>

int gcd(int a, int b){
  if(a == 0 || b == 0) return a + b;
  while((a %= b) != 0 && (b %= a) != 0);
  return a + b;
}

int main(){
    char line[256];
	FILE *f;
	
	// 開啟資料檔
	if ((f = fopen("./love.txt", "r")) == NULL) 
	{
		printf("無法開啟檔案!\n");
		return 1;
	}
	
	fscanf(f, "%s\n", line);  // 讀第一行
	
	int n = atoi(line); // 字串轉整數， n 代表有幾組資料
	// printf("There are %d numbers\n---------\n", n);

	for (int i = 1; i <= n; i++)
	{
		fscanf(f, "%s\n", line); // 讀第一個數字 s1

        int invalid=0;

        if(line[0]=='0'){
            invalid=1;
        }

		int s1 = strtol(line, 0, 2); // 將二進制字串轉為整數
        
        if(s1==1){
            invalid=1;
        }

		// printf("s1 = %d\n", s1);

		fscanf(f, "%s\n", line); // 讀第二個數字 s2

        if(line[0]=='0'){
            invalid=1;
        }

		int s2 = strtol(line, 0, 2); // 將二進制字串轉為整數

        if(s2==1){
            invalid=1;
        }

		// printf("s2 = %d\n-----------\n", s2);

        printf("Pair #%d ",i);

        if(invalid==1){
            printf("invalid\n");
        }else if(gcd(s1,s2)!=1){
            printf("All you is love!\n");
        }else {
            printf("Love is not all you need!\n");
        }

		// 檢查是否有 love?
		// ....
		// 有 love : 顯示 "All you need is love! 
		// 無 love : 顯示 "Love is not all you need!  
	}

	
	fclose(f); // 關閉檔案

	getchar(); // 等候使用者按鍵
}