#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#pragma warning (disable:4996)

int main() {
    char line[256];
    FILE* f;

    // 開啟資料檔
    if ((f = fopen("./10415.txt", "r")) == NULL){
        printf("無法開啟檔案!\n");
        return 1;
    }

    int testcases;

    fscanf(f, "%d\n", &testcases);

    char octave[] = "XcdefgabCDEFGAB";
    char finger[16][11] = {
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

    while (testcases--) {
        char str[300];
        int len = 0;
        char c;

        while (fscanf(f, "%c", &c) != EOF && c != '\n' && c != '\0') {
            str[len++] = c;
        }

        len=len-2;

        // str[len] = '\0';
        // len = strlen(str);

        int count[10] = { 0 };
        int current = 0, next;

        for (int i = 0; i < len; i++) {
            for (next = 1; octave[next] != str[i]; next++);
            for (int j = 0; j < 10; j++)
                if (finger[current][j] == '0' && finger[next][j] == '1') {
                    ++count[j];
                }
            current = next;
        }
        for (int j = 0; j < 10; j++) {
            printf("%d ", count[j]);
        }
        printf("\n");
    }

    fclose(f);
    system("pause");
    return 0;
}