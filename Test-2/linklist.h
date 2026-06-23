#ifndef LINKLIST_H
#define LINKLIST_H

typedef struct {
  int data;
  Node *next;
} Node;

Node *createList(int*, int);
Node *insertNode(Node*, int);
Node *searchNode(Node*, int);
Node *deleteNode(Node*, Node*);
void printList(Node*);
void freeList(Node*);

#endif