#include "linklist.h"
#include <stdlib.h>

Node *createList(int *arr, int len) {
  Node *first, *curr, *prev;
  prev = (Node*) malloc(sizeof(Node));
  for (int i = 0; i < len; i++) {
    curr = (Node*) malloc(sizeof(Node));
    curr->data = arr[i];
    if (i == 0) {
      first = curr;
    } else {
      prev->next = curr;
    }
    curr->next = NULL;
    prev = curr;
  }
  return first;
}

Node *insertNode(Node *node, int value) {
  Node *new = (Node*) malloc(sizeof(Node));
  new->data = value;
  new->next = node->next;
  node->next = new;
  return node;
}

Node *searchNode(Node *first, int value) {
  Node *node = first;
  while (node != NULL) {
    if (node->data == value) {
      return node;
    } else {
      node = node->next;
    }
  }
  return NULL;
}

Node *deleteNode(Node *first, Node *node) {
  Node *p = first;
  if (first == NULL) {
    printf("Nothing to delete!\n");
    return NULL;
  }
  if (node == first) {
    first = first->next;
  } else {
    while (p->next != node) {
      p = p->next;
    }
    p->next = node->next;
  }
  free(node);
  return first;hui
}