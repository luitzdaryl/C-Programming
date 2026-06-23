#include <stdio.h>
//#include <stdlib.h>
#include "FileHandler.h"
#pragma warning(disable:4996)
 
//copy the value from src to dist.
void copy(char* src, char* dist);
 
//append the text after target.
void append(char* target, char* text);
 
//split src char array to two part by target,  then output the left and right part by segmentA and segmentB.
void split(char* src, char target, char* segmentA, char* segmentB);
 
int main() {
    char* input = readAllTextFromFile("./input.txt");
    int inpLen = slen(input);
    char* temp = malloc(sizeof(char) * 1000);
    char* orig = malloc(sizeof(char) * 1000);
    char* splitChar = malloc(sizeof(char) * 10);
    char* appendText = malloc(sizeof(char) * 500);
    char* appendResult = malloc(sizeof(char) * 1000);
    split(input, '\n', orig, temp);
    split(temp, '\n', appendText, temp);
    split(temp, '\n', splitChar, temp);
    printf("Input char array: %s\n\n",orig);
    printf("Append text: %s\n",appendText);
    copy(orig, appendResult);
    append(appendResult, appendText);
    printf("Append result: %s\n\n", appendResult);
    printf("Original char array:  %s\n\n",orig);
    printf("Split Char: %c\n",splitChar[0]);
    printf("Split result: \n");
    char* segA = malloc(sizeof(char) * 1000);
    copy(appendResult, temp);
    while (temp[0] != '\0') {
        split(temp, splitChar[0], segA, temp);
        if (segA[0] >= 'a' && segA[0] <= 'z')
            segA[0] += 'A' - 'a';
        printf("%s\n", segA);
    }
 
    printf("\nStudent ID: B10815003\n");
    system("PAUSE");
}
 
// Get the length of string
int slen(char* c) {
    int i = 0;
    for (; c[i] != '\0'; i++);
    return i;
}
 
//copy len charaters from src to dist.
void copyl(char* src, char* dist, int len) {
    for (int i = 0; i < len; i++) {
        *dist = src[i];
        dist++;
    }
    *dist = '\0';
}
 
//copy the value from src to dist.
void copy(char* src, char* dist) {
    copyl(src, dist, slen(src));
}
 
//append the text after target.
void append(char* target, char* text) {
    copy(text, target + slen(target));
}
 
//split src char array to two part by target,  then output the left and right part by segmentA and segmentB.
void split(char* src, char target, char* segmentA, char* segmentB) {
    int len = slen(src);
    for (int i = 0; i < len; i++) {
        if (src[i] == target) {
            copyl(src, segmentA, i);
            copy(src + i+1, segmentB);
            return;
        }
    }
    copy(src, segmentA);
    segmentB[0] = '\0';
}