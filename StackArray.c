#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include"StackArray.h"

void initStack(Stack *S){
	S->top = -1;
}
bool isEmpty(Stack S){
	return(S.top == -1)? true: false;
}
bool isFull(Stack S){
	return(S.top == MAX-1)? true: false;
}
void push(Stack *S, Data elem){
	if(!(isFull(*S))){
		S->elems[++S->top] = elem;
	}
}
void pop(Stack *S){
	if(!isEmpty(*S)){
		--S->top;
	}
}
Data peek(Stack S){
	return(isEmpty(S))? -1: S.elems[S.top];
}
void displayStack(Stack *S){
	Stack *temp;
	initStack(temp);
	
	int ctr;
	for(ctr=S->top; !(isEmpty(*S)); ctr--){
		pop(S);
		push
	}
	
}
void visualizeStack(Stack S){
	int ctr;
	for(ctr=0; ctr<= S.top; ctr++){
		printf("%d\n", S.elems[ctr]);
	}
}
