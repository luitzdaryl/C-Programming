#include <stdio.h>
#include <string.h>
#include<stdlib.h>

#define SIZE 200

double factorial(char *, unsigned);
void nprintc(int, char);

const char star = '*';
//const int quit = -1;

int main(int argc, char *argv[]) {

    char in[SIZE], out[SIZE] = { '\0' };
    int x = 0;

    while (1) {


        fgets(in, SIZE, stdin);
        // if (x==-1) break;
        sscanf(in, "%d", &x);
        if(x==-1){
            break;
        }
        if ( (x < -1) || (x > 9)){

                puts("Invalid entry"); continue;
        }

        factorial(out, x);
        nprintc(strlen(out)+2, star);

        printf("\n*%s*\n", out);

        nprintc(strlen(out)+2, star);

        memset(out, '\0', SIZE);
printf("\n");
    }
    return 0;
}

double factorial(char *calc, unsigned n) {

    char s[SIZE];
    unsigned z = (n < 1) ? 1 : n, fact = z;


    sprintf(calc, "%d!=%d", n, z--);

    while (z > 0){
        fact *= z;
        sprintf(s, "x%d", z--);
        strcat(calc, s);
    }

    if (n >= 1) {
        sprintf(s, "=%d", fact);
        strcat(calc, s);
    }

    return fact;
}

void nprintc(int n, char c) {

    while (n-- > 0) putchar(c);
}
