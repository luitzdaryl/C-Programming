#include<stdio.h>
#include <ctype.h>

int main(){
    char word[100]={0};
    int len=0;

    printf("enter a word:");

    do {
        scanf("%c", &word[len++]);
    } while (word[len-1] != '\n');
    len--;

    for(int i=0;i<len;i++){
        word[i]=toupper(word[i]);   //小寫變大寫
    }

    for(int i=0;i<len;i++){
        if(word[i]=='A'||word[i]=='E'||word[i]=='I'||word[i]=='L'||word[i]=='N'||word[i]=='O'||word[i]=='R'||word[i]=='S'||word[i]=='T'||word[i]=='U'){
            word[i]=1;
        }else if(word[i]=='D'||word[i]=='G'){
            word[i]=2;
        }else if(word[i]=='B'||word[i]=='C'||word[i]=='M'||word[i]=='P'){
            word[i]=3; 
        }else if(word[i]=='F'||word[i]=='H'||word[i]=='V'||word[i]=='W'||word[i]=='Y'){
            word[i]=4;
        }else if(word[i]=='K'){
            word[i]=5;
        }else if(word[i]=='J'||word[i]=='X'){
            word[i]=8;
        }else if(word[i]=='Q'||word[i]=='Z'){
            word[i]=10;
        }/*else if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='l'||word[i]=='n'||word[i]=='o'||word[i]=='r'||word[i]=='s'||word[i]=='t'||word[i]=='u'){
            word[i]=1;
        }else if(word[i]=='d'||word[i]=='g'){
            word[i]=2;
        }else if(word[i]=='b'||word[i]=='c'||word[i]=='m'||word[i]=='p'){
            word[i]=3; 
        }else if(word[i]=='f'||word[i]=='h'||word[i]=='v'||word[i]=='w'||word[i]=='y'){
            word[i]=4;
        }else if(word[i]=='k'){
            word[i]=5;
        }else if(word[i]=='j'||word[i]=='x'){
            word[i]=8;
        }else if(word[i]=='q'||word[i]=='z'){
            word[i]=10;
        }*/
    }

    int value=0;

    for(int i=0;i<len;i++){
        value+=word[i];
    }

    printf("scrabble value: %d",value);

    return 0;
}