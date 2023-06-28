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

void push(Stack *S, Data elem){
	Stack temp;
	temp = (Stack) malloc(sizeof(NodeType));
	
	temp->next = *S;
	temp->elems = elem;
	*S = temp;
}
void pop(Stack *S){
	Stack temp;
	
	if(S!= NULL){
		temp = *S;
		*S = temp->next;
		free(temp);
	}
}
Data peek(Stack S){
	return S->elems;
}

void displayStack(Stack S){
	Stack temp;
	initStackLinkedList(&temp);
	
	while(isEmpty(S) == 0){
		printf("%d", peek(S));
		push(&temp, peek(S));
		pop(&S);
	}
	pop(&S);
}
void visualizeStack(Stack S){
	Stack trav;
	for(trav = S; trav != NULL; trav = trav->next){
		printf("%d\n", trav->elems);
	}
}
