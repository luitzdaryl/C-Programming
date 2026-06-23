#include<stdio.h>
#include <stdlib.h>

void copy(char *src, char *dist) {
    int len = 0;
    while (*(src +len) != '\0') len++;
    for (int i = 0; i <= len; i++) {
        *(dist + i) = *(src + i);
    }
}

void append(char *tar, char *text) {
    int tarlen = 0;
    while (*(tar + tarlen) != '\0') tarlen++;
    int textlen = 0;
    while (*(text + textlen) != '\0') textlen++;
    for (int i = 0; i <= textlen; i++) {
        tar[tarlen + i] = text[i];
    }
}

void split(char *src, char target, char **segments) {
    int begin = 0, end = 0, i = 0;
    while(*(src + end) != '\0') { 
        if (*(src + end) != target) end++;
        else {
            char *temp = calloc(100, sizeof(char));
            for (int j = 0; j < end - begin; j++) {
                temp[j] = *(src + begin + j);
            }
            *(segments+i) = temp;
            i++;
            end++;
            begin = end;
        }
    }
    char *temp = calloc(100, sizeof(char));
    for (int j = 0; j < end - begin; j++) {
        temp[j] = *(src + begin + j);
    }
    *(segments+i) = temp;
}

int main() {
    char *s1 = "abc";
    char *s2 = malloc(sizeof(char) * 100);
    char **result = malloc(sizeof(char) * 1000);
    copy(s1, s2);
    append(s2, "ppp");
    split("hi, i,m aasdllen,!asdhi, !", ',', result);
    
    int i = 0;
    while(result[i] != NULL){
        if (**(result+i) >= 'a' && **(result+i) <= 'z')
        {
            **(result+i) -= 32;
        }
        printf("%s\n", result[i]);
        i++;
    }
    // printf("%s\n", s2);
    return 0;
}