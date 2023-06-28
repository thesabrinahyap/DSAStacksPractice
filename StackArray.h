#include<stdbool.h>

#ifndef STACKARRAY_H
#define STACKARRAY_H

#define MAX 20


typedef int Data;

typedef struct{
	Data elems[MAX];
	int top;
} Stack;

void initStack(Stack *S);
bool isEmpty(Stack S);
bool isFull(Stack S);
void push(Stack *S, Data elem);
void pop(Stack *S);
Data peek(Stack S);
void displayStack(Stack S);
void visualizeStack(Stack S);

#endif
