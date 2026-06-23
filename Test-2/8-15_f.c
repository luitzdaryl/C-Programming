#include<stdio.h>

int main(){
    FILE *f;

	if ((f = fopen("./8-15.txt", "r")) == NULL) 
	{
		printf("無法開啟檔案!\n");
		return 1;
	}

    int testcases;

    fscanf(f,"%d\n",&testcases);

    while(testcases--){
        char mes[80]={0};
        int len=0,shift=0;
        char c;

        while (fscanf(f, "%c", &c) && c != '\n') {
            mes[len++] = c;
        }

        mes[len] = '\0';

        // for(int i=0;i<len;i++){
        //     printf("%c",mes[i]);
        // }

        fscanf(f,"%d\n",&shift);

        for(int i=0;i<len;i++){
            if (mes[i]>='a'&&mes[i]<='z'){
                mes[i] = ((mes[i] - 97) + shift) % 26 + 97;
            }else if(mes[i]>='A'&&mes[i]<='Z'){
                mes[i] = ((mes[i] - 65) + shift) % 26 + 65;
            }
            printf("%c",mes[i]);
        }
        printf("\n");
    }

    return 0;

}