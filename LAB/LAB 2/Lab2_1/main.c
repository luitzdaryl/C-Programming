#include <stdio.h>
#include <stdlib.h>

int main()
{
    float exchangeRate, amount, currencyNTD, currencyUSD;
    int converter; // to choose the currency

    scanf("%f", &exchangeRate);
    scanf("%d", &converter);
    scanf("%f", &amount);

    currencyNTD=exchangeRate*amount;
    currencyUSD=amount/exchangeRate;

    if(converter==0){ //USD to NTD
        printf("%.2f NTD",currencyNTD);
    }

    if(converter==1) { //NTD to USD
        printf("%.2f USD",currencyUSD);
    }

    return 0;
}
