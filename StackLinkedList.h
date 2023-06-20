#include<stdbool.h>

#ifndef STACKLINKEDLIST_H
#define STACKLINKEDLIST_H


typedef int Data;

typedef struct node{
	Data elems;
	struct node *next;
} NodeType, *Stack;

void initStack(Stack *S);
bool isEmpty(Stack S);
void push(Stack *S, Data elem);
void pop(Stack *S);
Data peek(Stack S);
void displayStack(Stack S);
void visualizeStack(Stack S);

#endif
