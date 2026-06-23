#include <stdio.h>

long long fibo(long long n) {
  if (n == 0) return 0;
  else if (n == 1) return 1;
  else return (fibo(n-1) + fibo(n-2));
}

int main() {
  int n = 0; 
  long long fibo[1000] = {0};
  printf("Enter number: ");
  scanf("%d", &n);

  if (n < 0) { // (n < 0) -> invalid then quit
    printf("invalid input\n");
    return 0;
  }

  fibo[0] = 0; // from definition of Fibonacci number 
  fibo[1] = 1; // F(0) = 0, F(1) = 1, F(N) = F(N-1) + F(N-2)
  for (int i = 2; i <= n; i++) { // calculate to F(N)
    fibo[i] = fibo[i - 1] + fibo[i - 2];
  }
  
  if ((n % 10) == 1) { // print out the result (if n ends with 1 then nst)
    printf("%dst Finobacci number is: %lld\n", n, fibo[n]);
  } else if ((n % 10) == 2) { // (if n ends with 2 then nnd)
    printf("%dnd Finobacci number is: %lld\n", n, fibo[n]);
  } else if ((n % 10) == 3) { // (if n ends with 3 then nrd)
    printf("%drd Finobacci number is: %lld\n", n, fibo[n]);
  } else { // (print nth)
    printf("%dth Finobacci number is: %lld\n", n, fibo[n]);
  }
  return 0;
}