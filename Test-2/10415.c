#include<stdio.h>
#include<string.h>

int main(){
    int testcases;
    char octave[] = "XcdefgabCDEFGAB";
    char finger[16][11]={
        "0000000000", /*X*/ 
        "0111001111", /*c*/
        "0111001110", /*d*/ 
        "0111001100", /*e*/
        "0111001000", /*f*/ 
        "0111000000", /*g*/
        "0110000000", /*a*/ 
        "0100000000", /*b*/
        "0010000000", /*C*/ 
        "1111001110", /*D*/
        "1111001100", /*E*/ 
        "1111001000", /*F*/
        "1111000000", /*G*/ 
        "1110000000", /*A*/
        "1100000000"  /*B*/
    };

    printf("how many testcases do you have?");
    scanf("%d",&testcases);

    while(testcases--){
        char str[300];
        scanf("%s",str);

        int len=strlen(str);
        int count[10]={0};
        int current=0,next;

        for(int i = 0; i < len; i++) {
            for(next = 1; octave[next] != str[i]; next++);
            for(int j = 0; j < 10; j++)
                if(finger[current][j] == '0' && finger[next][j] == '1'){
                    ++count[j];
                }
            current = next;
        }
        for(int j=0;j<10;j++){
            printf("%d ",count[j]);
        }
        printf("\n");
    }

    return 0;

}