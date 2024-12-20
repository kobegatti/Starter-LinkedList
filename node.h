#ifndef NODE_H
#define NODE_H

#define APPEND 1
#define INSERT 2
#define DELETE 3
#define PRINT 4
#define REVERSE 5
#define SEARCH 6
#define EXIT 7

#define INDEX_OUT_OF_RANGE(index) \
	fprintf(stderr, "Error: Index %d is out of range\n", index)

#include "utils.h"

typedef struct Node 
{
	char id[MAXLINE];
	int val;
	struct Node* next;
} Node;

Node* append(Node* head, char* id, int val);

Node* createNode(char* id, int val);

Node* delete(Node* head, int index);

int freeLinkedList(Node* head); /* returns number of nodes freed */

Node* insert(Node* head, int index, char* id, int val);

void printLinkedList(Node* head);

Node* reverse(Node* head);

int search(Node* head, char* id);

#endif
