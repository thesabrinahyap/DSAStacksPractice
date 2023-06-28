#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include"StackArray.h"


void initStack(Stack *S){
	int ctr;
	for(ctr=0; ctr<MAX; ctr++){
		S->elems[ctr] = 0;
	}
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
	if(isEmpty(*S)){
		printf("\nEMPTY STACK\n");
	}else{
		--S->top;
		
	}
}
Data peek(Stack S){
	return(isEmpty(S))? -1: S.elems[S.top];
}
void displayStack(Stack S){
	Stack temp;
	initStack(&temp);
	printf("Displaying Stack:\n");
	while(!isEmpty(S)){
		push(&temp, peek(S));
		pop(&S);
	}
	while(!isEmpty(temp)){
		printf("%d\n", peek(temp));
		push(&S,peek(temp));
		pop(&temp);
	}
	printf("\nEnd of Display Stack\n");
}
void visualizeStack(Stack S){
	int ctr;
	printf("Visualizing Stack:\n");
	for(ctr=0; ctr< MAX; ctr++){
		printf("%5d", S.elems[ctr]);
	}
	printf("\nEnd of Visualize Stack\n");
}
