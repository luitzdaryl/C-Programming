#include<stdio.h>

int main()
{
    char c;
    int i;
    char table[]="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";

    while((c = getchar()) != EOF){
        for(i = 1;table[i] && table[i] != c;++i);
        if(table[i]){
            printf("%c", table[i-1]);
        } else {
            printf("%c", c);
        }
    }

    return 0;
}