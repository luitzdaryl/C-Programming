#include <stdio.h>
#include <stdlib.h>

struct Node {
  int val;
  struct Node* next;
};

void displayList(struct Node* node) {
    struct Node* flag = node;
    while(flag) {
        printf("%4d", flag->val);
        flag = flag->next;
    }
}

void printListBackward(struct Node* node) {
    if(node) {
        printListBackward(node->next);
        printf("%4d", node->val);
    }
}

struct Node* createNode(){
    struct Node* temp;
    temp = (struct Node*)malloc(sizeof(struct Node));
    temp->next = NULL;
    return temp;
}

int main(){


    struct Node* head = NULL;
    int i = 0;

    while(i < 10) {
        int userInput;
        scanf("%d", &userInput);


        struct Node* newNode = createNode();
        newNode->val = userInput;

        if(head == NULL) {
            head = newNode;
        } else {
            struct Node* prev = NULL, *flag = head;
            while(flag) {
                if(userInput < flag->val) break;
                prev = flag;
                flag = flag->next;
            }
            newNode->next = flag;
            if(prev == NULL) head = newNode;
            else prev->next = newNode;
        }
        i++;
    }
    displayList(head);
       puts("");

    printListBackward(head);
       puts("");
    return 0;
}


