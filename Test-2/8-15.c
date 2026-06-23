#include<stdio.h>
int main(){
    char mes[80]={0};
    int len=0,shift=0;

    printf("Enter message to be encrtpted: ");

    do {
        scanf("%c", &mes[len++]);
    } while (mes[len-1] != '\n');
    len--;

    printf("Enter shift amount(1~26): ");
    scanf("%d", &shift);

    printf("Encrypted message: ");

    for(int i=0;i<len;i++){
        if (mes[i]>='a'&&mes[i]<='z'){
            mes[i] = ((mes[i] - 97) + shift) % 26 + 97;
        }else if(mes[i]>='A'&&mes[i]<='Z'){
            mes[i] = ((mes[i] - 65) + shift) % 26 + 65;
        }
        printf("%c",mes[i]);
    }
    printf("\n");

    return 0;
     
}