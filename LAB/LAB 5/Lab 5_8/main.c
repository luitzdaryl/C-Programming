#include <stdio.h>

int isprime(int n)
{
        int i,res=1;
        if(n<2) res = 0;
	else {
		for(i=2; i<sqrt(n); i++) {
			if(n%i==0) {
				res = 0;
				break;
			}
		}
	}
	return res;
}

int ispalindrome(int n)
{
	int rev=0,temp=n,res=0;
	while(temp>0) {
		rev = rev*10 + temp%10;
		temp /= 10;
	}
	if(rev==n) res=1;
	return res;
}

int main()
{
    int j=2, counter=0;
    while(counter<125){
        if(isprime(j)==1){
            if(ispalindrome(j)==1) {
            printf("%d ",j);
          counter++;
          if(counter%10==0){
            printf("\n");
          }
            }

                }
              j++;

    }

	return 0;
}
