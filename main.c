#include <stdio.h>
#include <stdlib.h>
#include "StackArray.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	Stack stack;
	
	initStack (&stack);
	printf("=============== PUSHING ELEMENTS TO STACK ===============\n");
	push(&stack, 16);
	push(&stack, 17);
	push(&stack, 18);
	push(&stack, 19);
	push(&stack, 10);
	visualizeStack(stack);
	printf("\n\nTop of the stack: %d\n" , peek(stack));
	printf("=============== POPPING ELEMENTS TO STACK ===============\n");
	pop(&stack);
	pop(&stack);
	pop(&stack);
	displayStack(stack);
	visualizeStack(stack);
	printf("\n\nTop of the stack: %d\n" , peek(stack));
	printf("=============== ATTEMPTING TO MAKE STACK EMPTY ===============\n");
	pop(&stack);
	displayStack(stack);
	visualizeStack(stack);	
	pop(&stack);
	displayStack(stack);
	visualizeStack(stack);
	displayStack(stack);	
	pop(&stack);
	visualizeStack(stack);	
	printf("\n\nTop of the stack: %d" , peek(stack));
	
	return 0;
}
