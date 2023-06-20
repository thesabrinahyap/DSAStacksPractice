#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include"StackLinkedList.h"

void initStack(Stack *S){
	*S = NULL;
}
bool isEmpty(Stack S){
	return(S = NULL)? true: false;
}

void push(Stack *S, Data elem);
void pop(Stack *S);
Data peek(Stack S);
void displayStack(Stack S);
void visualizeStack(Stack S);
