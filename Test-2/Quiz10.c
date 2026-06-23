#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

const char* FILENAME = "./intput.txt";

void reverse(char *x, int begin, int end) {
  char c;

  if (begin >= end)
    return;

  c = *(x+begin);
  *(x+begin) = *(x+end);
  *(x+end) = c;

  reverse(x, ++begin, --end);
}

void swap(char *str1, char *str2) 
{ 
  char *temp = (char *)malloc((strlen(str1) + 1) * sizeof(char)); 
  strcpy(temp, str1); 
  strcpy(str1, str2); 
  strcpy(str2, temp); 
  free(temp); 
}   

int find(char *s, char c) {
  char *p = s;
  while (*s) {
    if (*s == c)
      return s - p;
    s++;
  }
  return -1;
} 

int isSmaller(char *s1, char *s2) {
  int n1 = strlen(s1), n2 = strlen(s2);
  if (n1 < n2)
    return 1;
  if (n2 < n1)
    return 0;
  for (int i = 0; i < n1; i++)
    if (s1[i] < s2[i])
      return 1;
    else if (s1[i] > s2[i])
      return 0;
  
  return 0;
}

int add(char *s1, char *s2, char *ret) {
  int size = 0;
  
  int n1 = strlen(s1), n2 = strlen(s2);
  reverse(s1, 0, n1 - 1);
  reverse(s2, 0, n2 - 1);

  int carry = 0;
  for (int i = 0; i < n1; i++) {
    int sum = ((s1[i] - '0') + (s2[i] - '0') + carry);
    ret[size++] = sum % 10 + '0';

    carry = sum / 10;
  }

  for (int i = n1; i < n2; i++) {
    int sum = ((s2[i] - '0') + carry);
    ret[size++] = sum % 10 + '0';
    carry = sum / 10;
  }

  if (carry)
    ret[size++] = carry + '0';
  
  reverse(ret, 0, size - 1);
  return size;
}

int sub(char *s1, char *s2, char *ret) {
  int size = 0;
  if (isSmaller(s1, s2))
    swap(s1, s2);
  
  int n1 = strlen(s1), n2 = strlen(s2);
  reverse(s1, 0, n1 - 1);
  reverse(s2, 0, n2 - 1);

  int carry = 0;
  for (int i = 0; i < n2; i++) {
    int sub = ((s1[i] - '0') - (s2[i] - '0') - carry);

    if (sub < 0) {
      sub += 10;
      carry = 1;
    } else {
      carry = 0;
    }

    ret[size++] = sub + '0';
  }
  
  for (int i = n2; i < n1; i++) {
    int sub = ((s1[i] - '0') - carry);

    if (sub < 0) {
      sub += 10;
      carry = 1;
    } else {
      carry = 0;
    }

    ret[size++] = sub + '0';
  }

  reverse(ret, 0, size - 1);
  return size;
}

int main (int argc, char **argv) {
  FILE *p = fopen(FILENAME, "r");
  int cases = 0;
  fscanf(p, "%d", &cases);
  for (int t = 0; t < cases; ++t) {
    char str[200], s1[100], s2[100], op, ret[200];
    int size = 0;
    int k = 0;

    // clear the array (otherwise it will be error)
    memset(s1, '\0', 100);
    memset(s2, '\0', 100);
    memset(ret, '\0', 200);
    // read whole line
    fscanf(p, "%s", str);
    // k is the operator index
    while (!(str[k] == '+' || str[k] == '-')) k++; 
    
    op = str[k];
    strncpy(s1, str, k);
    strncpy(s2, str + k + 1, strlen(str) - k - 1);
    
    // char *d1, *d2;
    int dp1 = find(s1, '.'), dp2 = find(s2, '.');
    int dlen1 = 0, dlen2 = 0, len1 = 0, len2 = 0, diff = 0;
    len1 = k;
    len2 = strlen(str) - k - 1;
    if (dp1 != -1 || dp2 != -1) {
      dlen1 = dp1 != -1 ? len1 - 1 - dp1 : 0;    
      dlen2 = dp2 != -1 ? len2 - 1 - dp2 : 0;
      if (dlen1 > dlen2) {
        for (int i = 0; i < dlen1 - dlen2; i++) {
          s2[len2++] = '0';
        }
      } else if (dlen2 > dlen1) {
        for (int i = 0; i < dlen2 - dlen1; i++) {
          s1[len1++] = '0';
        }
      }
      diff = dlen1 > dlen2 ? dlen1 : dlen2;
    }
    
    if (dp1 != -1) {
      for (int i = dp1; i < diff + dp1; i++) {
        s1[i] = s1[i + 1];
      }
      s1[--len1] = '\0';
    } 
    if (dp2 != -1) {
      for (int i = dp2; i < diff + dp2; i++) {
        s2[i] = s2[i + 1];
      }
      s2[--len2] = '\0';
    }

    int neg = 0;
    switch (op) {
      case '+':
        if (isSmaller(s2, s1)) {
          swap(s1, s2);
        }
        size = add(s1, s2, ret);
        break;
      case '-':
        if (isSmaller(s1, s2)) {
          neg = 1;
          swap(s1, s2);
        }
        size = sub(s1, s2, ret);
        break;
    }

    diff = size - diff;
    while(ret[size-1] == '0' && size > diff) {
      size--;
    }
    int start = 0;
    if (neg)
      printf("-");
    for (int i = 0; i < size; i++) {
      if (ret[i] != '0') start = 1;
      if (start) {
        if (i == diff && diff != 0) {
          printf(".");
        }
        printf("%c", ret[i]);
      }
    }
    if (!start)
      printf("0");
    printf("\n");
  }

  system("pause");

  return 0;
  
}