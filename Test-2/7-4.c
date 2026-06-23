#include<stdio.h>

int main(){
    char phone[15]={0};
    int length=0;

    printf("Enter phone number:");

    char c;

    while (scanf( "%c", &c) && c != '\n' && length < 16) {
        phone[length++] = c;
    }

    phone[length] = '\0';
    
    // do{
    //     scanf("%c",&phone[length]);
    //     length++;
    // }while(phone[length-1]!='\n');

    // length-=1;

    if(length>15){
        printf("invalid phone number");
        return 0;
    }

    int invalid=0;

    for(int i=0;i<length;i++){
        if (phone[i] >= 'A' && phone[i] <= 'C') phone[i] = '2';
        else if (phone[i] >= 'D' && phone[i] <= 'F') phone[i] = '3';
        else if (phone[i] >= 'G' && phone[i] <= 'I') phone[i] = '4';
        else if (phone[i] >= 'J' && phone[i] <= 'L') phone[i] = '5';
        else if (phone[i] >= 'M' && phone[i] <= 'O') phone[i] = '6';
        else if (phone[i] >= 'P' && phone[i] <= 'S') phone[i] = '7';
        else if (phone[i] >= 'T' && phone[i] <= 'V') phone[i] = '8';
        else if (phone[i] >= 'W' && phone[i] <= 'Y') phone[i] = '9';
    
        if (phone[i] == '*' || phone[i] == 'Q' || phone[i] == 'Z') invalid = 1;
    }

    if(invalid==0){
        for(int i=0;i<length;i++){
            printf("%c",phone[i]);
        }
    }else{
        printf("invalid phone number");
    }

    return 0;
    
}