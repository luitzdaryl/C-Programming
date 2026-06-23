#include<stdio.h>
#include <string.h>

int main(){
    FILE *f;

	if ((f = fopen("./7-4.txt", "r")) == NULL) 
	{
		printf("無法開啟檔案!\n");
		return 1;
	}

  int testcases;

  fscanf(f,"%d\n",&testcases);

    // printf("%d",testcases);

  while(testcases--){
      char phone[20]={0}, c;
      int len=0;

      while (fscanf(f, "%c", &c) && c != '\n' && len < 16) {
        phone[len++] = c;
      }

      phone[len] = '\0';

      // do{
      //     fscanf(f,"%c",&phone[len]);
      //     len++;
      // }while(phone[len-1] != '\n' && phone[len-1] != EOF);

      // len-=1;

      // printf("%d",len);

      if(len>15){
          printf("invalid phone number\n");
          continue;
      }

      int invalid=0;

      for(int i=0;i<len;i++){
          if (phone[i] >= 'A' && phone[i] <= 'C') phone[i] = '2';
          else if (phone[i] >= 'D' && phone[i] <= 'F') phone[i] = '3';
          else if (phone[i] >= 'G' && phone[i] <= 'I') phone[i] = '4';
          else if (phone[i] >= 'J' && phone[i] <= 'L') phone[i] = '5';
          else if (phone[i] >= 'M' && phone[i] <= 'O') phone[i] = '6';
          else if (phone[i] >= 'P' && phone[i] <= 'S') phone[i] = '7';
          else if (phone[i] >= 'T' && phone[i] <= 'V') phone[i] = '8';
          else if (phone[i] >= 'W' && phone[i] <= 'Y') phone[i] = '9';
      
          if (phone[i] == '*' || phone[i] == 'Q' || phone[i] == 'Z' || phone[i] == '<' || phone[i] == '>'){
              invalid = 1;
          } 
      }

      if(invalid==0){
          for(int i=0;i<len;i++){
              printf("%c",phone[i]);
          }
          printf("\n");
      }else{
          printf("invalid phone number\n");
      }
    }

    return 0;

}