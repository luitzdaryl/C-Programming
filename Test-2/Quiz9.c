#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int stringToBin(char *s){
    int bin=0;

    for(int i=0;i<strlen(s);i++){
        bin*=2;
        bin+=s[i]-'0';
    }

    return bin;
}

int gcd(int a, int b){
  if(a == 0 || b == 0) return a + b;
  while((a %= b) != 0 && (b %= a) != 0);
  return a + b;
}

int readStringFromFile(FILE *f,char **strings,int n){
    int LEN=40;
    
    size_t size = 0;
    for (int i = 0; i <= n; i++) {
        strings[i] = (char*) calloc(LEN ,sizeof(char));
    }
    
    while(fscanf(f,"%s",strings[size])){
        if(size>=n) break;
        size++;
    }

    size--;

    return size;
    
}

int main(){
    const char *filename="./love.txt";
    FILE *f=fopen(filename,"r");

    int n=0;

    fscanf(f,"%d",&n);
    n *= 2;
    char **strings=(char **)malloc(n*sizeof(char*));

    int size=readStringFromFile(f,strings,n);

    for(int i=0;i<size;i+=2){
        int num1=stringToBin(strings[i]);
        int num2=stringToBin(strings[i+1]);

        printf("Pair #%d ",i/2+1);
        if (strings[i][0] == '0' || strings[i+1][0] == '0' || num1 == 1 || num2 == 1) {
            printf("invalid\n");
        }else if(gcd(num1,num2)!=1){
            printf("All you is love!\n");
        }else{
            printf("Love is not all you need!\n");
        }
    }

    fclose(f);
    
    system("pause");
    return 0;

}